#include<stdio.h>
#include<memory.h>
const int maxn=401;
int edge[maxn][maxn];  
int color[maxn];      //0: uncolored.   -1 +1  : colored black or white.
int n;

int r, f;  // rear and front.
int list[maxn + 1];

bool bfs(int u){
	f = 0; r = 0; 
	color[u] = 1; list[r++] = u;
	while (f<r){
		u = list[f];  // fill this sentence
		f++;
		for (int v = 1; v<=n; v++)
			if (edge[u][v] == 1){
				//add something here
				if(color[v]==0){
					color[v]=color[u];
					list[r++]=v;
				}
				else{
					if(color[v]==color[u]){
						return false;
					}
				}
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
    	//Add something here, which inputs the adjacent matrix (into the 2-dimensional array "edge")
		for(int j=1;j<=n;j++){
			for(int p=1;p<=n;p++){
				scanf("%d",&edge[j][p]);
			}
		}
		bool flag=false;
		for(int i=1;i<=n;i++){
			if(!color[i]){
				if(!bfs(i)){
				    printf("No\n");   //  Modify ???
					flag=true;   //  Modify ???
					break;
				}
			} 
		}
		if(!flag) printf("Yes\n");  // Modify ???
	}
	return 0;
}
