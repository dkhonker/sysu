#include<stdio.h>
#include<memory.h>
#include<stdlib.h>

const int maxn=5001;

int *A[maxn];
int *B[maxn];
bool visited[maxn];
int d[maxn], n, edges;

void dfs(int u){
	//write this part by yourself
	//Hints, when u has an adjacent v which has not been visited, you should dfs(v) and choose the edge(u,v).
    visited[u]=true;
    int j=1;
    int v;
    for(v=A[u][j];v>0;j++){
    	if(!visited[v]){
		    edges++;
            dfs(v);
    		B[u][j]=1;
    		int k=1;
    		for(k=1;A[v][k]>0;k++){
    			if(A[v][k]==u){
    				B[v][k]=1;
				}
			}	
		}
	}
   //Note: when you choose an edge of (u,v) where v=A[u][j], you should set B[u][j] as 1.
	 //Meanwhile, you should find all of k satisfying A[v][k]=u and set B[v][k]=1. (think why)
	// In other words, remember to mark two entries of B[][] to be 1, when an edge was selected.
}

void printAns(){
	printf("%d\n",edges);
	//write this part. It prints the table B.
	//remember to print d[i] first in the row corresponding to the i-th node.
	//read the ppt for the output format
	int m;
	for(m=1;m<d[m];m++){
		printf("%d ",d[m]);
		int num;
		for(num=1;num<d[m];num++){
			printf("%d ",B[m][num]);
		}
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
