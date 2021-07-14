#include<stdio.h>
#include<memory.h>
const int maxn=401;

int edge[maxn][maxn];   //邻接矩阵
int color[maxn];   
int change[maxn];   //0: uncolored.   -1 +1  : colored black or white.
int n;

bool dfs(int u,int c){
    color[u]=c;     //对u点进行染色操作 
    for(int v=1;v<=n;v++)//遍历与u点相连的点
        if(edge[u][v]==1){
            if(color[v]==c) 
				return 0;//add some code here   (Hint: we can conlude that the graph is not bipartite now, as both u v are should be colored with c!)
            if(color[v]==0)
				color[v]=-1*color[u];
				change[v]=1;//add some code here.  (Hint: call dfs on v)
        }
    for(int v=1;v<=n;v++)
	{
		if(change[v]==1&&dfs(v,color[v])==0)return 0;
	}    
	return 1;//add a return setence here.
}

int main(){
    int k;
    scanf("%d",&k);
    for(int m=1;m<=k;m++){
    	scanf("%d",&n);
    	memset(edge,0,sizeof(edge));
        memset(color,0,sizeof(color));
        memset(change,0,sizeof(change));

		for(int x=1;x<=n;x++){
		for(int y=1;y<=n;y++)
		{scanf("%d",&edge[x][y]);} 
		}//Input the graph (scanf edge[i][j] ) by yourself in the following

		bool flag=true;
		for(int i=1;i<=n;i++){
			if(color[i]==0){ //Add some code in the following. 
				flag=dfs(i,1);	//Hint:  call dfs.  if it retruns false, print some information saying this is not a biparptite graph and REMEMBER TO break and set the flag variable to be false.
			} 
		}
		
		if(flag)printf("Yes\n"); //add some code in the folowing.
		else printf("No\n");		//Hint: what shall be printed if flag=true?
	}
	return 0;
}



