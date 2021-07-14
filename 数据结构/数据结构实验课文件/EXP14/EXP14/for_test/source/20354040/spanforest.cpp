#include<stdio.h>
#include<memory.h>
#include<stdlib.h>

const int maxn=5001;

int *A[maxn];
int *B[maxn];
bool visited[maxn];
int d[maxn], n, edges=0;

int dfs(int u){
	//write this part by yourself
	//Hints, when u has an adjacent v which has not been visited, 
	//you should dfs(v) and choose the edge(u,v).
	if(!visited[u])
	{
		int v=A[u][1];
		B[u][1]=1;
   //Note: when you choose an edge of (u,v) where v=A[u][j],
   // you should set B[u][j] as 1.
	 //Meanwhile, you should find all of k satisfying A[v][k]=u 
	 //and set B[v][k]=1. (think why)
		for(int i=1;i<=d[u];i++)
			if(u==A[v][i])
				{
					B[v][i]=1;
					visited[v]=1;
					break;
				}
	// In other words, remember to mark two entries of B[][] to be 1, 
	//when an edge was selected.
		edges++;
		visited[u]=1;
	}
}

void printAns(){
	printf("%d\n",edges);
	//write this part. It prints the table B.
	//remember to print d[i] first in the row corresponding to the i-th node.
	//read the ppt for the output format
	for(int i=1;i<=n;i++)
	{
		printf("%d ",d[i]);
		for(int j=1;j<=d[i];j++)
			printf("%d ",B[i][j]);
		printf("\n");
	}

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
