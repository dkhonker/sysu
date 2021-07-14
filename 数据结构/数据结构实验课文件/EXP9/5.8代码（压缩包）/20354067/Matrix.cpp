/*
2* ����һ��������Matrix, ���ݳ�Ա����:����double *data���������nRows���������nColumns; ������Ա������
��1�� ���캯������������������ȣ����ƹ��캯��������ȣ���ֵ�������
��2�� nElems()�������ؾ���Ԫ�ظ���, size()���ؾ�����ռ�洢�ռ��С
��3�� set/get����ĳ��ĳ�е�ֵ���������ĳһ�У��������ĳһ�У���ӡ���������ֵ��
��4�� ����������/�������add/sub����m1.add(m2)���޸�m1�����ֵ
��5�� ����+/-�������ʵ�ֱ���m3=m1+m2�﷨������+���������һ���µ�Matric����
��6�� ��д�������������й��ܡ�ע�⣺�������Ҫ������Ĵ�Сƥ��
*/

#include <cassert>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Matrix {
public:
	Matrix(int rows, int cols) : nRows(rows), nColumns(cols) {
		assert(rows > 0 && cols > 0);
		nElems = nRows * nColumns;
		data = new double[nElems];
		memset(data, 0, sizeof(double)* nElems);
	}
	~Matrix() { 
		delete[] data; 
	}
	Matrix(const Matrix &m) {		
		nRows = m.nRows;
		nColumns = m.nColumns;
		nElems = m.nElems;
		data = new double[nElems];
		memcpy(data, m.data, size());
	}
	Matrix & operator=(const Matrix & m) {
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
	bool sizeMatch(const Matrix &m) const { 
		return nRows == m.getNumRows() && nColumns == m.getNumColumns();
	}
	int flatIndex(int rowIdx, int colIdx) const {
		assert(rowIdx >= 0 && rowIdx < nRows && colIdx >= 0 && colIdx < nColumns);
		return rowIdx * nColumns + colIdx; 
	}
	double get(int rowIdx, int colIdx) const {
		assert(rowIdx >= 0 && rowIdx < nRows && colIdx >= 0 && colIdx < nColumns);
		return data[flatIndex(rowIdx, colIdx)]; 
	}
	void set(int rowIdx, int colIdx, double val) {
		assert(rowIdx >= 0 && rowIdx < nRows && colIdx >= 0 && colIdx < nColumns);
		data[flatIndex(rowIdx, colIdx)] = val;
	}
	void getRow(int rowIdx, std::vector<double>& vec) const {		
		for (int i = 0; i < nColumns; i++)
			vec.push_back(get(rowIdx, i));
		//a faster implementation is to use memory copy:
		//double* startIdx = data + rowIdx * nColumns;
		//vec.assign(startIdx, startIdx + nColumns);
	}
	void getColumn(int colIdx, std::vector<double>& vec) const {
		for (int i = 0; i < nRows; i++)
			vec.push_back(get(i, colIdx));
	}
	//returning a referene type instead of void enables
	//operations like m1 + m2 + m3. That is, (m1 + m2) returns 
	//an object's reference, so (m1 + m2) + m3 is valid.
	//The same goes with operator=, <<
	Matrix& add(const Matrix & m) {
		assert(sizeMatch(m));
		for (int i = 0; i < nElems; i++)
			data[i] += m.data[i];
		return *this;
	}
	Matrix& sub(const Matrix &m) {
		assert(sizeMatch(m));
		for (int i = 0; i < nElems; i++)
			data[i] -= m.data[i];
		return *this;
	}
	friend Matrix operator+(const Matrix &m1, const Matrix &m2) {
		Matrix m(m1);
		return m.add(m2);
	}
	friend Matrix operator-(const Matrix &m1, const Matrix &m2) {
		Matrix m(m1);
		return m.sub(m2);
	}
	//returning ostream & enables operations like cout << m << m1
	friend ostream& operator<<(std::ostream & os, const Matrix & m) {		
		for (int i = 0; i < m.nElems; i++) {
			cout << setw(5) << setprecision(2) << m.data[i] << " ";
			if ((i+1) % m.nColumns == 0)
				cout << endl;
		}
		return os;
	}

private:
	int nRows;
	int nColumns;
	int nElems;
	double *data;
};

int main()
{
	Matrix m(3, 3);

	for (int i = 0; i < m.getNumRows(); i++) {
		for (int j = 0; j < m.getNumColumns(); j++)
			m.set(i, j, (i + 1) * (j + 1));
	}

	Matrix m1(m);
	Matrix m3 = m + m1;
	cout << m - m3;

	vector<double> v;
	(m + m3).getRow(2, v);
	for (auto d : v)
		cout << d << " ";

	return 0;
}