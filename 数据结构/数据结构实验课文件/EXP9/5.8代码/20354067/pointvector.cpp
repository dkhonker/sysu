#include<iostream>
#include<string>
#include<cassert>
using namespace std;
struct Point {
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	void print() { std::cout << "(" << x << "," << y << ")"; }
	int x;
	int y;
};
class PointVector {
private:
	Point* data;
	unsigned size;
	unsigned capacity;
public:
	PointVector() {
		size = 0;
		capacity = 0;
	}
	PointVector(const PointVector& x) {
		size = x.size;
		capacity = x.capacity;
		data = new Point[capacity];
		for (unsigned i = 0;i < size;i++)
		{
			data[i].x = x.data[i].x;
			data[i].y = x.data[i].y; 
		}
	}
	~PointVector() {
		if (capacity != 0)
			delete[] data;
	}
	PointVector& operator =(const PointVector& p) {
		if (this == &p)
			return *this;
		if (capacity != 0)
			delete[] data;
		data = new Point[p.capacity];
		size = p.size;
		capacity = p.capacity;
		for (unsigned i = 0;i < size;i++)
		{
			data[i].x = p.data[i].x;
			data[i].y = p.data[i].y;
		}
	}
	friend PointVector operator +(const PointVector& p1, const PointVector& p2) {
		assert(p1.size == p2.size);//引入cassert
		PointVector p(p1);
		for (unsigned i = 0;i < p.size;i++)
		{
			p.data[i].x += p2.data[i].x;
			p.data[i].y += p2.data[i].y;
		}
		return p;
	}
	friend ostream& operator <<(std::ostream& os, const PointVector& p) {
		for (unsigned i = 0;i < p.size;i++)
		{
			p.data[i].print();
			if ((i + 1) % 5 == 0)
				cout << endl;
		}
		return os;
	}
	Point& operator [](unsigned i) { return data[i]; }//变更
	void clear() {//变更
		if (capacity != 0)
			delete[] data;
		size = capacity = 0;
	}
	void push_back(const Point& p) {
		if (capacity == 0)
		{
			capacity = 2;
			data = new Point[capacity];
			data[size].x = p.x;
			data[size].y = p.y;
			size++;
		}
		else if (capacity == size)
		{
			PointVector pv(*this);
			delete[] data;
			capacity *= 2;
			data = new Point[capacity];
			for (unsigned i = 0;i < size;i++)
			{
				data[i].x = pv.data[i].x;
				data[i].y = pv.data[i].y;
			}
			data[size].x = p.x;
			data[size].y = p.y;
			size++;
		}
		else if (capacity > size)
		{
			data[size].x = p.x;
			data[size].y = p.y;
			size++;
		}
	}
	void pop_back() {
		if (size > 0)
			size--;
	}
	Point& at(unsigned idx) {
		if (idx <= size)
			return data[idx];
	}
	unsigned Getsize() { return size; }//变更
	unsigned Getcapacity() { return capacity; }//变更
	bool empty() {return capacity == 0; }
	Point& front() {return data[0];	}
	Point& back() { return data[size - 1]; }
	bool insert(unsigned pos, const Point& pt) {
		assert(pos <= size);
		if (capacity == 0)
		{
			data[pos].x = pt.x;
			data[pos].y = pt.y;
			size++;
			return true;
		}
		else if (capacity == size)
		{
			PointVector p(*this);
			capacity *= 2;
			delete[] data;
			data = new Point[capacity];
			for (unsigned i = 0;i < pos;i++)
			{
				data[i].x = p.data[i].x;
				data[i].y = p.data[i].y;
			}
			data[pos].x = pt.x;
			data[pos].y = pt.y;
			for (unsigned i = pos;i < size;i++)
			{
				data[i + 1].x = p.data[i].x;
				data[i + 1].y = p.data[i].y;
			}
			size++;
			return true;
		}
		else if (capacity > size)
		{
			for (unsigned i = size;i > pos;i--)
			{
				data[i].x = data[i - 1].x;
				data[i].y = data[i - 1].y;
			}
			data[pos].x = pt.x;
			data[pos].y = pt.y;
			size++;
			return true;
		}
	}
	bool erase(unsigned pos) {
		assert(size > pos);
		if (size > 0)
		{
			for (unsigned i = pos;i < size - 1;i++)
			{
				data[i].x = data[i + 1].x;
				data[i].y = data[i + 1].y;
			}
			size--;
			return true;
		}
	}
};
int main()//进行了一些优化，但结果不变
{
	PointVector pvec;
	cout << "create a new pointvector pvec" << endl;
	if (pvec.empty()) printf("empty point vector!\n");
	cout << "now I'm going to fill it" << endl;
	for (int i = 0; i < 20; i++) {
		pvec.push_back(Point(i, i));
		std::cout << "size = " << pvec.Getsize() << ", capacity = " << pvec.Getcapacity() << std::endl;
	}
	cout << "the front and back of prev:" << endl;
	pvec.front().print();
	pvec.back().print();
	PointVector pvec1(pvec);
	cout << endl;
	cout << "pvec->pvec1:" << endl;
	std::cout << pvec1;
	PointVector pvec2;
	pvec2 = pvec1;
	cout << "pvec1->pvec2, x and y:" << endl;
	for (unsigned j = 0; j < pvec2.Getsize(); j++) {
		std::cout << pvec2.at(j).x << " " << pvec2[j].y << std::endl;
	}
	pvec.insert(0, Point(100, 100));
	cout << "I secretly insert a point to pvec:" << endl;
	std::cout << pvec << std::endl;
	cout << "and then I secretly erase a point of pvec" << endl;
	pvec.erase(pvec.Getsize() / 2);
	cout << "let's see what it is now:" << endl;
	std::cout << pvec << std::endl;
	cout << "the last one, pvec1+pvec2:" << endl;
	std::cout << pvec1 + pvec2 << std::endl;
}