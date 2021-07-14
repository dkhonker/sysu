#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<set>
#include <iostream>
using namespace std;
const int maxn = 5001;
const int N[10] = {5, 10, 20,  30, 100, 200, 400,  1000,  3000, 5000};
const int M[10] = {6, 15, 40, 100, 500, 3000, 5000, 50000, 100000, 200000}; 
char filename[10] = "0.in";

int d[maxn];
vector<set<int> > edge(5001);
int color[maxn];

void genData(int n,int m, int k){
	if (k==0) k = 1;
	for(int i=1;i<=n;i++) color[i]=rand()%k+1;
	int a,b;
	for(int i=1;i<=m;i++){
		do{
			a=rand()%n+1;
			b=rand()%n+1;
		}while(a==b || edge[a].count(b) != 0 || color[a]!=color[b]);
		edge[a].insert(b);
		edge[b].insert(a);
	}
	for (int i = 1; i <= n; i++)
		d[i] = edge[i].size();
}
void outputData(int n) {
	FILE* fout = fopen(filename, "w");
	fprintf(fout,"%d\n", n);
	for (int i = 1; i <= n; i++) {
		fprintf(fout,"%d ", d[i]);
		set<int>::iterator iter = edge[i].begin();
		while (iter != edge[i].end()) {
			fprintf(fout,"%d ", *iter);
			iter++;
		} //遍历对应顶点i的set
		fprintf(fout,"\n");
		edge[i].clear(); 
	}
	fclose(fout);
}

int main(){	
	srand(0);
	for(int t=0;t<10;t++){
		printf("producing %d...\n", t);
		filename[0] = '0' + t;
		if(t>=5) genData(N[t],M[t],min(5,N[t]/50));
		else genData(N[t],M[t],1);
		 
		outputData(N[t]); 
	}
	return 0;
}
