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
	int count;//????????????
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
			delete[]data;//????????????????????????
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
	SparseMatrix& add(const SparseMatrix& m) {//????????????????????????????????????
		assert((Columns == m.Columns) && (Rows == m.Rows));//????????????
		if (count == 0) {//a????????????b
			*this = m;
			return *this;
		}
		if (m.count == 0)//??????????a
			return *this;
		int i = 0, j = 0, k = 0;//i??j??????????????????????????????????????????????????????????????????k??????????????????????data????????
		SparseMatrix sm(*this);
		for (i = 0;i < m.count;i++)
		{
			for (j = 0;j < count;j++)
				if ((m.data[i].col == data[j].col) && (m.data[i].row == data[j].row))
					break;
			if (j == count)//??????????a??????????????????????????b??????????????????
				count++;
		}//??????????
		delete[]data;
		data = new NonzeroElement[count];
		i = 0;
		j = 0;
		while ((i < m.count) && (j < sm.count))//??????&&????????????????????????????????????
		{
			if ((m.data[i].row < sm.data[j].row) || ((m.data[i].row == sm.data[j].row) && (m.data[i].col < sm.data[j].col)))//b??????????a??????
			{
				data[k].row = m.data[i].row;
				data[k].col = m.data[i].col;
				data[k].value = m.data[i].value;//??b????????????????????
				i++;
				k++;
			}
			else if ((m.data[i].row == sm.data[j].row) && (m.data[i].col == sm.data[j].col))//a??b??????????????????????
			{
				data[k].row = m.data[i].row;
				data[k].col = m.data[i].col;
				data[k].value = sm.data[j].value + m.data[i].value;//????
				i++;
				j++;
				k++;
			}
			else//a??b????
			{
				data[k].row = sm.data[j].row;
				data[k].col = sm.data[j].col;
				data[k].value = sm.data[j].value;//????
				j++;
				k++;
 			}
		}
		while (i < m.count)//??????a????????????????????b??????
		{
			data[k].row = m.data[i].row;
			data[k].col = m.data[i].col;
			data[k].value = m.data[i].value;
			i++;
			k++;
		}
		while (j < sm.count)//????
		{
			data[k].row = sm.data[j].row;
			data[k].col = sm.data[j].col;
			data[k].value = sm.data[j].value;
			j++;
			k++;
		}
		return *this;
	}
	SparseMatrix& substract(const SparseMatrix& m) {//??????????add????????
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
				data[k].value = -m.data[i].value;//??????add??????????????????????????
				i++;
				k++;
			}
			else if ((m.data[i].row == sm.data[j].row) && (m.data[i].col == sm.data[j].col))
			{
				data[k].row = m.data[i].row;
				data[k].col = m.data[i].col;
				data[k].value = sm.data[j].value - m.data[i].value;//????
				i++;
				j++;
				k++;
			}
			else
			{
				data[k].row = sm.data[j].row;
				data[k].col = sm.data[j].col;
				data[k].value = sm.data[j].value;//????
				j++;
				k++;
			}
		}
		while (i < m.count)//????
		{
			data[k].row = m.data[i].row;
			data[k].col = m.data[i].col;
			data[k].value = -m.data[i].value;
			i++;
			k++;
		}
		while (j < sm.count)//????
		{
			data[k].row = sm.data[j].row;
			data[k].col = sm.data[j].col;
			data[k].value = sm.data[j].value;
			j++;
			k++;
		}
		return *this;
	}
	void print() const{//????????????????????
		int k = 0;
		for (int i = 0;i <= Rows;i++)
		{
			for (int j = 0;j <= Columns;j++)
				if ((i == data[k].row) && (j == data[k].col))//????????????????
				{
					cout << data[k].value << " ";//??????????????
					k++;
				}
				else cout << 0<<" ";//??????????????
			cout << endl;
		}
	}
	friend ostream& operator <<(std::ostream& os, const SparseMatrix& m) {//????????????????????print????????????????????????????????
		m.print();
		return os;
	}
	friend SparseMatrix operator +(const SparseMatrix& m1, const SparseMatrix& m2) {//????+
		SparseMatrix m(m1);
		return m.add(m2);
	}
	friend SparseMatrix operator -(const SparseMatrix& m1, const SparseMatrix& m2) {//????-
		SparseMatrix m(m1);
		return m.substract(m2);
	}
	void setRC(const int r, const int c) {//??????????????????????????????????????
		Rows = r;
		Columns = c;
	}
	void setData(const int r, const int c, const double d) {//????????????
		assert(Columns * Rows);//????????????????
		if (count == 0)//????????????delete
		{
			count++;
			data = new NonzeroElement[count];
			data[0].row = r;
			data[0].col = c;
			data[0].value = d;//????????????
		}
		else
		{
			int k = 0;//????????????????????????????????????????????????????????
			for (k = 0;k < count;k++)
				if ((data[k].row == r) && (data[k].col == c))
					break;
			if (k == count)//????????????????????????
			{
				SparseMatrix m(*this);
				delete[]data;
				count++;
				data = new NonzeroElement[count];
				int i = 0, j = 0;//??????????????????????????????
				while (j < m.count)
				{
					if ((m.data[j].row < r) || ((m.data[j].row == r) && (m.data[j].col < c)))//????????????
					{
						data[i].row = m.data[j].row;
						data[i].col = m.data[j].col;
						data[i].value = m.data[j].value;
						i++;
						j++;
					}
					else break;
				}//??????????????
				data[i].row = r;
				data[i].col = c;
				data[i].value = d;//????
				i++;
				while (i < count)
				{
					data[i].row = m.data[j].row;
					data[i].col = m.data[j].col;
					data[i].value = m.data[j].value;//??????????????
					i++;
					j++;
				}
			}
			else data[k].value = d;//????????????????????????
		}
	}
	void getData()const {//????????????????????
		cout << "row column value of NonzeroElement" << endl;
		for (int i = 0;i < count;i++)
			cout << i + 1 << "  " << data[i].row << "   " << data[i].col << "      " << data[i].value << endl;//????????????????????????main????????
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