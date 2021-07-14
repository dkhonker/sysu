#include<stdio.h>
#include<memory.h>
const int maxn=401;

int edge[maxn][maxn];   //邻接矩阵
int color[maxn];      //0: uncolored.   -1 +1  : colored black or white.
int n;

bool dfs(int u,int c){
    color[u]=c;     //对u点进行染色操作 
    for(int v=1;v<=n;v++)//遍历与u点相连的点
        if(edge[u][v]==1){
            if(color[v]==c) 
				//add some code here   (Hint: we can conlude that the graph is not bipartite now, as both u v are should be colored with c!)
				return false; 
            if(!color[v])
            	if (dfs(v,-c)) return false;
				//add some code here.  (Hint: call dfs on v)
					
        }
	//add a return setence here.
	return true;
}

int main(){
    int k;
    scanf("%d",&k);//k个矩阵 
    for(int m=1;m<=k;m++){
    	scanf("%d",&n);
    	memset(edge,0,sizeof(edge));
        memset(color,0,sizeof(color));
        for (int i=0;i<n;i++)
        {
        	for (int j=0;j<n;j++)
        	{
        		scanf("%d",&edge[i][j]);
			}
		}

		//Input the graph (scanf edge[i][j] ) by yourself in the following
		
		bool flag=true;
		for(int i=1;i<=n;i++){
			if(!color[i]){ //Add some code in the following. 
				if(!dfs(i,1))
				{
					
					printf("No\n");
					flag=false;
					break;
				
				}	//Hint:  call dfs.  if it retruns false, print some information saying this is not a biparptite graph and REMEMBER TO break and set the flag variable to be false.
			} 
		}
		if(flag) printf("Yes\n");
				//Hint: what shall be printed if flag=true?
	}
	return 0;
}



