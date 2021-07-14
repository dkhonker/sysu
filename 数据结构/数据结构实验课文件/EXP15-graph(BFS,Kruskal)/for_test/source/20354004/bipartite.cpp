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
		for (int v = 1; v<=n; v++)//������u�������ĵ� 
			if (edge[u][v] == 1){//�ж�u�����ڵ��Ƿ�������1������ 
			if(color[v]==c)return false;//�����u�����ĵ���uȾ����ͬ����ɫ�����Ƕ���ͼ 
			if(!color[v]&&!bfs(v,-c))return false;	//�����δȾɫ����Ⱦ���෴����ɫ����������bfs 
			}
	}
	return true; 
}

int main(){
    int k;
    scanf("%d",&k);
    for(int m=1;m<=k;m++){
    	scanf("%d",&n);
    	memset(edge,0,sizeof(edge));  //memset�����Խṹ����������� 
        memset(color,0,sizeof(color));
        
        //Add something here, which inputs the adjacent matrix (into the 2-dimensional array "edge")
    	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		scanf("%d",&edge[i][j]);
		
		bool flag=false;
		for(int i=1;i<=n;i++){
			if(!color[i]){//�����δ��ɫ 
				if(!bfs(i,1)){//����bfs�������bfs����Ϊfalse������if�����䣬���Ƕ���ͼ 
				    printf("No\n");   //  Modify ???
					flag=true;   //  Modify ???//flagΪ���ж��Ƿ�ִ���˴˲��裬����ȷ�����Ƕ���ͼ 
					break;
				}
			} 
		}
		if(!flag) printf("Yes\n");  // Modify ???
	}
	return 0;
}
