#include <bits/stdc++.h>
#include<set>
using namespace std;
const int MAXN = 50000;
const int MAXM = 500000;
int n,m;
const int N[10] = {5, 8, 15,  30, 1000, 5000, 10000,  20000,  30000, 49999};
const int M[10] = {6, 10, 20, 50, 5000, 10000, 20000, 300000, 400000, 499999}; 
set<long long> S;
char filename[10] = "0.in";
void swap(int & a, int & b){
	int c = a; a = b; b = c;
}
int randN(int n){ 
	int x = rand() % 10000;
	int y = rand() % 10000;
	return (x * 10000 + y) % n + 1;
}
long long convert(int a, int b){
	long long x = a;
	x <<= 20;
	return x + b;
}

void convert_back(long long x, int & a, int & b){
	b = x & ((1<<20)-1); a = (x >> 20);
}

int color[MAXN];
int gendata(int n,int m){
	S.clear();
	FILE* fout = fopen(filename, "w");
	for(int i=1;i<=n;i++) color[i]=rand()%5;
	for(int i=1;i<=m;i++){
		int a, b;
		do{
			a = randN(n); b = randN(n);
		} while(a == b || color[a]!=color[b]);
		S.insert(convert(a, b));
	}
	m=S.size();
	if (m > MAXM) printf("error! too many edges generated!");
	fprintf(fout,"%d %d\n", n, m);
	set<long long>::iterator s = S.begin();
	for (int i=1; i<= m; i++){
		int a, b;
		convert_back(*s, a, b);
		fprintf(fout,"%d %d\n", a, b);
		s++;
	}
	fclose(fout);
}

int main()
{
	srand(0);
	for(int t=0;t<10;t++){
		printf("producing %d...\n", t);
		filename[0] = '0' + t; 
		gendata(N[t],M[t]);
	} 
	return 0;
}
