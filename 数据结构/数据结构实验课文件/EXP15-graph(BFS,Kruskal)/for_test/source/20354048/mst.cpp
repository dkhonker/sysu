//Kruskal algorithm
#include<stdio.h>

const int maxn = 100000;
const int maxm = 500000;

int edge[maxm + 1][3];
int parent[maxn + 1];
int rank[maxn + 1];
int ind[maxm + 1]; 
int m, n;

int Find(int x) { //path-compression  Find
	if (x != parent[x]) 
		parent[x] = Find(parent[x]);
	return parent[x];
}

void Union(int r, int s) { //link-by-rank  Union
	if (rank[s] > rank[r]) parent[r] = s;
	else if (rank[s] < rank[r]) parent[s] = r;
	else{ parent[s] = r; rank[r]++; }
}

void swap(int &a, int &b) {
	int tmp = a; a = b; b = tmp;
}

int partition(int l, int r) {
//		int i=l;
//		int j=r;
//		int key=edge[j][2];
//		while(i<j) {
//			while(edge[j][2]>=key&&i<j) j--;
//			while(edge[i][2]<=key&&i<j) i++;
//			swap(edge[i][0],edge[j][0]);
//			swap(edge[i][1],edge[j][1]);
//			swap(edge[i][2],edge[j][2]);
//			i++;
//		}
	int i = l,keep=l;
	for (int j = l; j < r; j++) 
		if (edge[ind[j]][2] < edge[ind[r]][2])
		{
			swap(edge[ind[j]][2],edge[ind[i]][2]);
			swap(edge[ind[j]][1],edge[ind[i]][1]);
			swap(edge[ind[j]][0],edge[ind[i]][0]);
			i++;
		}
	swap(edge[ind[r]][2],edge[ind[i]][2]);
	swap(edge[ind[r]][1],edge[ind[i]][1]);
	swap(edge[ind[r]][0],edge[ind[i]][0]);
			//add something here    Hint: Call swap() to exchange ind[j] and ind[r]
	//add something here       Hint: Call swap() exchange something.   (Recall what you learn from quicksort)
	return i;
}

void Qsort(int l, int r) {
	if(l<r){
		int k = partition(l, r);
		if(l<k-1){
			Qsort(l,k-1);
		} 
		if(k+1<r){
			Qsort(k+1,r);
		}
	}
	//add something here.   Hint : call Qsort recursively when left / right interval length larger than 1.
}

int kruskal() {
	int l1,l2;
	for (int i = 1; i <= n; i++) { //makeset
		//Fill the following stences  (These are fundamentals of union-find data-structure)	
		parent[i] = i; rank[i] =0;
	}
	int sumCost = 0, cnt = 0;
	for (int i = 1; i <= m; i++) {
		l1=edge[i][0];
		l2=edge[i][1];
		if(Find(l1)!=Find(l2)){
			Union(l1,l2);
			sumCost+=edge[i][2];
			cnt++;
		}
		//add something here.   Hint: this is the major part of the Kruskal algorithm, but it is very very simple.
	} //actually, our data promise you that this won't happen.
	return sumCost;
}

int main() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++) 
		scanf("%d %d %d", &edge[i][0], &edge[i][1], &edge[i][2]);
	for (int i = 1; i <= m; i++) ind[i] = i;
	Qsort(1, m);   // sort the edges by cost, from smallest to largest.    Use the array ind[] to help.     
	   //After the sorting,  edge[ind[1]], edge[ind[2]],..., edge[ind[m]] are sorted by cost.
	for(int i=1;i<=m;i++){
		printf("%d\n",edge[i][2]);
	}
	int res = kruskal();
	printf("%d", res);
	return 0;
}
