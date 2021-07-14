#include <cassert>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Matrix {
	friend class SparseMatrix;
public:
	Matrix(int rows, int cols) : nRows(rows), nColumns(cols) {
		assert(rows > 0 && cols > 0);
		nElems = nRows * nColumns;
		data = new double[nElems];
		memset(data, 0, sizeof(double) * nElems);
	}
	~Matrix() {
		delete[] data;
	}
	Matrix(const Matrix& m) {
		nRows = m.nRows;
		nColumns = m.nColumns;
		nElems = m.nElems;
		data = new double[nElems];
		memcpy(data, m.data, size());
	}
	Matrix& operator=(const Matrix& m) {
		if (this == &m)
			return *this;
		delete[] data;
		data = new double[nElems];
		memcpy(data, m.data, size());
		return *this;
	}
	int nElements() const { return nElems; }
	int size() const { return nElems * sizeof(double); }
	int getNumRows() const { return nRows; }
	int getNumColumns() const { return nColumns; }
	bool sizeMatch(const Matrix& m) const {
		return nRows == m.getNumRows() && nColumns == m.getNumColumns();
	}
	int flatIndex(int rowIdx, int colIdx) const {
		assert(rowIdx >= 0 && rowIdx < nRows&& colIdx >= 0 && colIdx < nColumns);
		return rowIdx * nColumns + colIdx;
	}
	double get(int rowIdx, int colIdx) const {
		assert(rowIdx >= 0 && rowIdx < nRows&& colIdx >= 0 && colIdx < nColumns);
		return data[flatIndex(rowIdx, colIdx)];
	}
	void set(int rowIdx, int colIdx, double val) {
		assert(rowIdx >= 0 && rowIdx < nRows&& colIdx >= 0 && colIdx < nColumns);
		data[flatIndex(rowIdx, colIdx)] = val;
	}
	void getRow(int rowIdx, std::vector<double>& vec) const {
		for (int i = 0; i < nColumns; i++)
			vec.push_back(get(rowIdx, i));
	}
	void getColumn(int colIdx, std::vector<double>& vec) const {
		for (int i = 0; i < nRows; i++)
			vec.push_back(get(i, colIdx));
	}
	Matrix& add(const Matrix& m) {
		assert(sizeMatch(m));
		for (int i = 0; i < nElems; i++)
			data[i] += m.data[i];
		return *this;
	}
	Matrix& sub(const Matrix& m) {
		assert(sizeMatch(m));
		for (int i = 0; i < nElems; i++)
			data[i] -= m.data[i];
		return *this;
	}
	friend Matrix operator+(const Matrix& m1, const Matrix& m2) {
		Matrix m(m1);
		return m.add(m2);
	}
	friend Matrix operator-(const Matrix& m1, const Matrix& m2) {
		Matrix m(m1);
		return m.sub(m2);
	}friend ostream& operator<<(std::ostream& os, const Matrix& m) {
		for (int i = 0; i < m.nElems; i++) {
			cout << setw(5) << setprecision(2) << m.data[i] << " ";
			if ((i + 1) % m.nColumns == 0)
				cout << endl;
		}
		return os;
	}

private:
	int nRows;
	int nColumns;
	int nElems;
	double* data;
};
class SparseMatrix {
private:
	int Rows;
	int Columns;
	int count;//非零元素计数
	struct NonzeroElement { int row; int col; double value; }* data;
public:
	SparseMatrix() {
		Rows = Columns = count = 0;
	}
	SparseMatrix(const Matrix& m) {
		assert(m.nElems != 0);
		Rows = m.nRows - 1;
		Columns = m.nColumns - 1;
		count = 0;
		
			for (int i = 0;i < m.nElems;i++)
				if (m.data[i] != 0)
					count++;
			data = new NonzeroElement[count];
			int j = 0;
			for(int i = 0;i<m.nElems;i++)
				if (m.data[i] != 0)
				{
					data[j].col = i % m.nColumns;
					data[j].row = (i - data[j].col) / m.nRows;
					data[j].value = m.data[i];
					j++;
				}
		
	}
	SparseMatrix(const SparseMatrix& m) {
		if (Columns * Rows == 0)
		{
			Columns = m.Columns;
			Rows = m.Rows;
			count = m.count;
			data = new NonzeroElement[count];
			for (int i = 0;i < count;i++)
			{
				data[i].row = m.data[i].row;
				data[i].col = m.data[i].col;
				data[i].value = m.data[i].value;
			}
		}
		else
		{
			delete[]data;
			Columns = m.Columns;
			Rows = m.Rows;
			data = new NonzeroElement[count];
			for (int i = 0;i < count;i++)
			{
				data[i].row = m.data[i].row;
				data[i].col = m.data[i].col;
				data[i].value = m.data[i].value;
			}
		}
	}
	~SparseMatrix() {
		if (count != 0)
			delete[]data;
	}
	SparseMatrix& operator = (const SparseMatrix& m) {
		if (this == &m)
			return *this;
		if (Columns * Rows == 0)
		{
			Columns = m.Columns;
			Rows = m.Rows;
			data = new NonzeroElement[count];
			for (int i = 0;i < count;i++)
			{
				data[i].row = m.data[i].row;
				data[i].col = m.data[i].col;
				data[i].value = m.data[i].value;
			}
			return *this;
		}
		else
		{
			delete[]data;//本来有值的情况需清理内存
			Columns = m.Columns;
			Rows = m.Rows;
			data = new NonzeroElement[count];
			for (int i = 0;i < count;i++)
			{
				data[i].row = m.data[i].row;
				data[i].col = m.data[i].col;
				data[i].value = m.data[i].value;
			}
			return *this;
		}
	}
	SparseMatrix& add(const SparseMatrix& m) {//要求的函数，用于将和直接保存在对象中
		assert((Columns == m.Columns) && (Rows == m.Rows));//矩阵大小匹配
		if (count == 0) {//a为零，直接得b
			*this = m;
			return *this;
		}
		if (m.count == 0)//反之直接得a
			return *this;
		int i = 0, j = 0, k = 0;//i，j使用两次，分别用于更新计数以及按顺序对两个矩阵的非零元素进行操作；k使用一次，用于逐个将新data进行赋值
		SparseMatrix sm(*this);
		for (i = 0;i < m.count;i++)
		{
			for (j = 0;j < count;j++)
				if ((m.data[i].col == data[j].col) && (m.data[i].row == data[j].row))
					break;
			if (j == count)//如果遍历了a所有非零元素的位置，没有与b匹配的，则增加计数
				count++;
		}//得到新计数
		delete[]data;
		data = new NonzeroElement[count];
		i = 0;
		j = 0;
		while ((i < m.count) && (j < sm.count))//这里用&&表示只与一个冲突就冲出循环，防止越界
		{
			if ((m.data[i].row < sm.data[j].row) || ((m.data[i].row == sm.data[j].row) && (m.data[i].col < sm.data[j].col)))//b非零元素在a的之前
			{
				data[k].row = m.data[i].row;
				data[k].col = m.data[i].col;
				data[k].value = m.data[i].value;//将b的非零元素赋给新矩阵
				i++;
				k++;
			}
			else if ((m.data[i].row == sm.data[j].row) && (m.data[i].col == sm.data[j].col))//a，b都有同一位置的非零元素
			{
				data[k].row = m.data[i].row;
				data[k].col = m.data[i].col;
				data[k].value = sm.data[j].value + m.data[i].value;//求和
				i++;
				j++;
				k++;
			}
			else//a在b之前
			{
				data[k].row = sm.data[j].row;
				data[k].col = sm.data[j].col;
				data[k].value = sm.data[j].value;//同理
				j++;
				k++;
 			}
		}
		while (i < m.count)//相当于a的非零元素数完了，但b还有剩
		{
			data[k].row = m.data[i].row;
			data[k].col = m.data[i].col;
			data[k].value = m.data[i].value;
			i++;
			k++;
		}
		while (j < sm.count)//反之
		{
			data[k].row = sm.data[j].row;
			data[k].col = sm.data[j].col;
			data[k].value = sm.data[j].value;
			j++;
			k++;
		}
		return *this;
	}
	SparseMatrix& substract(const SparseMatrix& m) {//减函数，与add几乎同理
		assert((Columns == m.Columns) && (Rows == m.Rows));
		int i = 0, j = 0, k = 0;//
		SparseMatrix sm(*this);
		for (i = 0;i < m.count;i++)
		{
			for (j = 0;j < count;j++)
				if ((m.data[i].col == data[j].col) && (m.data[i].row == data[j].row))
					break;
			if (j == count)
				count++;
		}
		delete[]data;
		data = new NonzeroElement[count];
		i = 0;
		j = 0;
		while ((i < m.count) && (j < sm.count))
		{
			if ((m.data[i].row < sm.data[j].row) || ((m.data[i].row == sm.data[j].row) && (m.data[i].col < sm.data[j].col)))
			{
				data[k].row = m.data[i].row;
				data[k].col = m.data[i].col;
				data[k].value = -m.data[i].value;//这里与add不同，由于是减法，故为负数
				i++;
				k++;
			}
			else if ((m.data[i].row == sm.data[j].row) && (m.data[i].col == sm.data[j].col))
			{
				data[k].row = m.data[i].row;
				data[k].col = m.data[i].col;
				data[k].value = sm.data[j].value - m.data[i].value;//求差
				i++;
				j++;
				k++;
			}
			else
			{
				data[k].row = sm.data[j].row;
				data[k].col = sm.data[j].col;
				data[k].value = sm.data[j].value;//不变
				j++;
				k++;
			}
		}
		while (i < m.count)//同理
		{
			data[k].row = m.data[i].row;
			data[k].col = m.data[i].col;
			data[k].value = -m.data[i].value;
			i++;
			k++;
		}
		while (j < sm.count)//同理
		{
			data[k].row = sm.data[j].row;
			data[k].col = sm.data[j].col;
			data[k].value = sm.data[j].value;
			j++;
			k++;
		}
		return *this;
	}
	void print() const{//以矩阵形式输出的函数
		int k = 0;
		for (int i = 0;i <= Rows;i++)
		{
			for (int j = 0;j <= Columns;j++)
				if ((i == data[k].row) && (j == data[k].col))//找到非零元素位置
				{
					cout << data[k].value << " ";//空格是为了好看
					k++;
				}
				else cout << 0<<" ";//与非零元素对齐
			cout << endl;
		}
	}
	friend ostream& operator <<(std::ostream& os, const SparseMatrix& m) {//重载《，由于已经写了print函数，因此比较简单，按格式写即可
		m.print();
		return os;
	}
	friend SparseMatrix operator +(const SparseMatrix& m1, const SparseMatrix& m2) {//重载+
		SparseMatrix m(m1);
		return m.add(m2);
	}
	friend SparseMatrix operator -(const SparseMatrix& m1, const SparseMatrix& m2) {//重载-
		SparseMatrix m(m1);
		return m.substract(m2);
	}
	void setRC(const int r, const int c) {//赋予行列（考虑到初始化时可能行列为零）
		Rows = r;
		Columns = c;
	}
	void setData(const int r, const int c, const double d) {//赋予非零元素
		assert(Columns * Rows);//显然矩阵不能为空
		if (count == 0)//主要防止重复delete
		{
			count++;
			data = new NonzeroElement[count];
			data[0].row = r;
			data[0].col = c;
			data[0].value = d;//相对较为简便
		}
		else
		{
			int k = 0;//用于判断新非零元素位置上是否已有非零元素，并找到这个位置
			for (k = 0;k < count;k++)
				if ((data[k].row == r) && (data[k].col == c))
					break;
			if (k == count)//以前没有此位置的非零元素
			{
				SparseMatrix m(*this);
				delete[]data;
				count++;
				data = new NonzeroElement[count];
				int i = 0, j = 0;//分别用于新旧矩阵非零元素的遍历
				while (j < m.count)
				{
					if ((m.data[j].row < r) || ((m.data[j].row == r) && (m.data[j].col < c)))//在新元素之前
					{
						data[i].row = m.data[j].row;
						data[i].col = m.data[j].col;
						data[i].value = m.data[j].value;
						i++;
						j++;
					}
					else break;
				}//找到新元素位置
				data[i].row = r;
				data[i].col = c;
				data[i].value = d;//赋值
				i++;
				while (i < count)
				{
					data[i].row = m.data[j].row;
					data[i].col = m.data[j].col;
					data[i].value = m.data[j].value;//将剩余元素补齐
					i++;
					j++;
				}
			}
			else data[k].value = d;//如果以前就有，则直接替换
		}
	}
	void getData()const {//输出非零元素相关信息
		cout << "row column value of NonzeroElement" << endl;
		for (int i = 0;i < count;i++)
			cout << i + 1 << "  " << data[i].row << "   " << data[i].col << "      " << data[i].value << endl;//空格为了格式对应，详情见main函数结果
	}
};
int main()
{
	Matrix m(3, 3);

	for (int i = 0; i < m.getNumRows(); i++) {
		for (int j = 0; j < m.getNumColumns(); j++)
			m.set(i, j, 0);
	}
	m.set(1, 2, 1);
	SparseMatrix m1(m);
	cout << "m1:" << endl;
	m1.print();
	SparseMatrix m2;
	m2.setRC(2, 2);
	m2.setData(0, 1, 3);
	cout << "m2:" << endl;
	cout << m2;
	SparseMatrix m3 = m2 - m1;
	cout << "m2-m1->m3:" << endl;
	m3.print();
	cout << "m3:";
	m3.getData();
	cout << "m2+m1->m2:" << endl;
	cout << m2.add(m1);
	m2.setData(2, 0, 2);
	cout << "new m2 with more elements:" << endl;
	m2.print();
	return 0;
}