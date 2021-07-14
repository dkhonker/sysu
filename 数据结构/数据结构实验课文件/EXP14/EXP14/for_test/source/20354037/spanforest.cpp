#include<stdio.h>
#include<memory.h>
#include<stdlib.h>

const int maxn=5001;

int *A[maxn];
int *B[maxn];
bool visited[maxn];
int d[maxn], n, edges=0;

void dfs(int u){
    for(int v=1;v<=d[u];v++)
    {
    	if(!visited[A[u][v]])
    	{
    		//edges++;
    		visited[A[u][v]] = 1;
    		dfs(A[u][v]);
    		B[u][v] = 1;
    		if(B[v][u] != 1)
    		{
    			edges++;
    			B[v][u] = 1;
			}
    		else B[v][u] =1;
    		for(int k=1;k<=d[u];k++)
    		{
    			if(A[A[u][v]][k]==u) B[A[u][v]][k] = 1;
			}		
		}
	}
}

void printAns(){
	printf("%d\n",edges);
	for(int i=1;i<=n;i++)
	{
		printf("%d ",d[i]);
		for(int j =1;j<=d[i];j++)
		{
			printf("%d ",B[i][j]);
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
