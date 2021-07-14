#include<stdio.h>
#include<memory.h>
const int maxn=401;
int edge[maxn][maxn];  
int color[maxn];      //0: uncolored.   -1 +1  : colored black or white.
int n;

int r, f;  // rear and front.
int list[maxn + 1];

//找寻所有没染色的顶点，染色，如果有发现相邻的连接点颜色相同了，则构不成二分图。
//全部染色完且没有相邻结点颜色相同则为二分图。 

bool bfs(int u){
	f = 0; r = 0; 
	color[u] = 1; list[r++] = u;
	while (f<r)
	{
		u = list[f++];
		for (int v = 1; v<=n; v++)
			if (edge[u][v] == 1)
			{
				if(color[v]==color[u])
				return false;
				if(!color[v])
				if(!bfs(v))
				return false;
			}
	}
	return true; 
}

int main(){
    int k;
    scanf("%d",&k);
    for(int m=1;m<=k;m++){
    	scanf("%d",&n);
    	memset(edge,0,sizeof(edge));
        memset(color,0,sizeof(color));
    	for(int i=1;i<=n;i++)
    	for(int j=1;j<=n;j++)
    	scanf("%d",&edge[i][j]);
    	
		bool flag=false;
		for(int i=1;i<=n;i++){
			if(!color[i])//找寻未染色的点 
			{
				if(!bfs(i))//不是二分图 
				{
				    printf("No\n");
					flag=true;
					break;
				}
			} 
		}
		if(!flag) printf("Yes\n");
	}
	return 0;
}
