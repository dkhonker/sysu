#include<stdio.h>
#include<memory.h>
using namespace std;
const int maxn=401;

int edge[maxn][maxn];   //邻接矩阵
int color[maxn];      //0: uncolored.   -1 +1  : colored black or white.
int n;

bool dfs(int u,int c){
    color[u]=c;     //对u点进行染色操作 
    for(int v=1;v<=n;v++)//遍历与u点相连的点
        if(edge[u][v]==1){
            if(color[v]==c) 
				return false;
            if(!color[v])
				dfs(v,-c);
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

	    for(int j=1;j<=n;j++){
	    	for(int e=1;e<=n;e++){
	    		scanf("%d",&edge[j][e]);
			}
		}

		bool flag=true;
		for(int i=1;i<=n;i++){
			if(!color[i]){ //Add some code in the following. 
					//Hint:  call dfs.  if it retruns false, print some information saying this is not a biparptite graph and REMEMBER TO break and set the flag variable to be false.
			    if(!dfs(i, 1)){
                printf("No");
                break;
			}
		}
		if(flag) //add some code in the folowing.
			printf("Yes");	//Hint: what shall be printed if flag=true?
	}
	return 0;
}
}



