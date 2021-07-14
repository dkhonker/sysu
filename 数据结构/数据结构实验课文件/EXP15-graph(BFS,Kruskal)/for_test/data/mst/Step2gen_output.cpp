#include<stdio.h>

const int maxn = 100000;
const int maxm = 500000;

int edge[maxm + 1][3];
int parent[maxn + 1];
int rank[maxn + 1];
int hash[maxm + 1];
int m, n;

char filename_in[10] = "0.in";
char filename_out[10] = "0.out";
FILE* fout;
FILE* fin;
int Find(int x) { //Â·¾¶Ñ¹Ëõ
	if (x != parent[x]) parent[x] = Find(parent[x]);
	return parent[x];
}

void Union(int x, int y) { //link by rank
	int s = Find(x), r = Find(y);
	if (rank[s] > rank[r]) parent[r] = s;
	else if (rank[s] < rank[r]) parent[s] = r;
	else {
		rank[r]++; parent[s] = r;
	}
}

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int qsort(int l, int r) {
	int i = l;
	for (int j = l; j < r; j++) {
		if (edge[hash[j]][2] < edge[hash[r]][2]) {
			swap(hash[j], hash[i++]);
		}
	}
	swap(hash[i], hash[r]);
	return i;
}

void partition(int l, int r) {
	int k = qsort(l, r);
	if (k > l) partition(l, k - 1);
	if (k < r) partition(k + 1, r);
}

void edgeSort() {
	for (int i = 1; i <= m; i++) {
		hash[i] = i;
	}
	partition(1, m);
}

int krustal() {
	int sumCost = 0;
	int cnt = 0;
	edgeSort();
	for (int i = 1; i <= m; i++) {
		int x = edge[hash[i]][0];
		int y = edge[hash[i]][1];
		int c = edge[hash[i]][2];
		if (cnt == n - 1) break;
		if (Find(x) != Find(y)) {
			Union(x, y);
			sumCost += c;
			cnt++;
		}
		else continue;
	}
	return sumCost;

}

void inputdata() {
	fin = fopen(filename_in, "r");
	fscanf(fin, "%d %d", &n, &m);
	for (int i = 1; i <= m; i++) {
		fscanf(fin, "%d %d %d", &edge[i][0], &edge[i][1], &edge[i][2]);
	}
	for (int i = 1; i <= n; i++) { //makeset
		parent[i] = i; rank[i] = 0;
	}
}


int main() {
	for (int j = 0; j < 10; j++)
	{
		filename_in[0] = '0' + j;
		filename_out[0] = '0' + j;
		inputdata();
		int res = krustal();
		fout = fopen(filename_out, "w");
		fprintf(fout, "%d ", res);
		fclose(fout);
	}
	return 0;

}
