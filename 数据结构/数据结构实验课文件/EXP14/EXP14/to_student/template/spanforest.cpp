#include<stdio.h>
#include<memory.h>
#include<stdlib.h>

const int maxn=5001;

int *A[maxn];
int *B[maxn];
bool visited[maxn];
int d[maxn], n, edges;

int dfs(int u){
	//write this part by yourself (Hint, when u got an adjacent v which is not visited,  you can dfs(v) and choose the edge(u,v).

   //Note: when you choose an edge that connecting (u,v) where v=A[u][j], set B[u][j] = 1. Moreover, find k such that A[v][k]=u and set B[v][k]=1.
	// In other words, remember to mark two entries of B[][] to be 1, whenever you want to choose an edge.
}

void printAns(){
	printf("%d\n",edges);
	//write this part. It prints table B.  
	//remember to print d[i] first in the row corresponding to the i-th node.  (read the ppt for the format)
}

int main(){
	scanf("%d",&n);

	memset(visited, 0, sizeof(visited));
	for(int i=1;i<=n;i++){
		scanf("%d",&d[i]);
		A[i]=(int*)malloc(sizeof(int)*(d[i]+1));
		B[i]=(int*)malloc(sizeof(int)*(d[i]+1));
		for(int j=1;j<=d[i];j++){
			scanf("%d", &A[i][j]);
			B[i][j]=0; 
		}
	}
	for(int i=1;i<=n;i++) 
		if (!visited[i]) dfs(i);
	printAns();
	return 0;
}
