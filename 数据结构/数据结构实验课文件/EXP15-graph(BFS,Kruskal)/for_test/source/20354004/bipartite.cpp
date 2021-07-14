#include<stdio.h>
#include<memory.h>
const int maxn=401;
int edge[maxn][maxn];  
int color[maxn];      //0: uncolored.   -1 +1  : colored black or white.
int n;
int c;
int r, f;  // rear and front.
int list[maxn + 1];

bool bfs(int u,int c){
	f = 0; r = 0; 
	color[u] = c; list[r++] = u;
	while (f<r){
		u =list[f++]; // fill this sentence
		for (int v = 1; v<=n; v++)//遍历与u点相连的点 
			if (edge[u][v] == 1){//判断u与相邻点是否相连，1即相连 
			if(color[v]==c)return false;//如果与u相连的点与u染了相同的颜色，则不是二分图 
			if(!color[v]&&!bfs(v,-c))return false;	//如果还未染色，则染上相反的颜色；继续调用bfs 
			}
	}
	return true; 
}

int main(){
    int k;
    scanf("%d",&k);
    for(int m=1;m<=k;m++){
    	scanf("%d",&n);
    	memset(edge,0,sizeof(edge));  //memset函数对结构体或数组清零 
        memset(color,0,sizeof(color));
        
        //Add something here, which inputs the adjacent matrix (into the 2-dimensional array "edge")
    	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		scanf("%d",&edge[i][j]);
		
		bool flag=false;
		for(int i=1;i<=n;i++){
			if(!color[i]){//如果还未上色 
				if(!bfs(i,1)){//调用bfs；且如果bfs返回为false，进入if后的语句，不是二分图 
				    printf("No\n");   //  Modify ???
					flag=true;   //  Modify ???//flag为了判断是否执行了此步骤，即以确定不是二分图 
					break;
				}
			} 
		}
		if(!flag) printf("Yes\n");  // Modify ???
	}
	return 0;
}
