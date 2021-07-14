//1. 要保证无重边
//2. 要保证连通

#include <stdio.h>
#include <set>
#include<algorithm> 
#include<vector>
using namespace std;

const int MAXN = 100000;
const int MAXM = 500000;
char filename[10] = "0.in"; //不要改变这个文件名，程序运行时会自动修改它。

int f[MAXN + 1];
int r[MAXN + 1];

const int MAXC = 10000;  //边的费用是1到这么大。
const int N[10] = { 5, 10, 20,  30,    100,   2000, 10000,  80000,  90000, 100000 };
const int M[10] = { 6, 15, 40, 100, 500000, 500000,  5000, 400000, 500000, 500000 };
//M不一定是最终的边数。而是算法一开始随机产生的边数，有可能会有重复有可能会添加其他边。
int n, m;    

set<long long> S;

int randN(int n) { // 随机生成一个1~n的数。(n较大）
	int x = rand() % 10000;
	int y = rand() % 10000;
	return (x * 10000 + y) % n + 1;
}

int randCost(int a, int b) {
	return rand()  % MAXC + 1;
}

void swap(int& a, int& b) {
	int c = a; a = b; b = c;
}

long long convert(int a, int b) {
	long long x = a;
	x <<= 20;
	return x + b;
}

void convert_back(long long x, int& a, int& b) {
	b = x & ((1 << 20) - 1);
	a = (x >> 20);
}

int find(int x) { //path-compression. 
	if (f[x] != x)
		f[x] = find(f[x]);
	return f[x];
}

void unionroot(int ra, int rb) { //link-by-rank.
	if (r[ra] < r[rb])
		f[ra] = rb;
	else if (r[rb] < r[ra])
		f[rb] = ra;
	else {
		f[ra] = rb; r[rb] ++;
	}
}

void genGraph() {
	S.clear();
	for (int i = 1; i <= n; i++) {
		f[i] = i; r[i] = 0;
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		do {
			a = randN(n); b = randN(n);
		} while (a == b);
		if (a > b) swap(a, b);
		S.insert(convert(a, b));
		int ra = find(a), rb = find(b);
		if (ra != rb)	unionroot(ra, rb);
	}
	for (int i = 2; i <= n; i++) {
		int ra = find(1), rb = find(i);
		if (ra != rb) {
			unionroot(ra, rb);
			S.insert(convert(1, i));
		}
	}
}

void printGraph() {
	m = S.size();
	if (m > MAXM) printf("error! too many edges generated!");
	FILE* fout = fopen(filename, "w");
	fprintf(fout, "%d %d\n", n, m);
	set<long long>::iterator s = S.begin();
	for (int i = 1; i <= m; i++) {
		int a, b;
		convert_back(*s, a, b);
		fprintf(fout, "%d %d %d\n", a, b, randCost(a,b));
		s++;
	}
	fclose(fout);
}

int main() {
	srand(0);
	for (int t = 0; t < 10; t++) {
		n = N[t];
		m = M[t];
		filename[0] = '0' + t;
		printf("producing %s...\n", filename);
		genGraph();
		printGraph();
	}
}