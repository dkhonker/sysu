#include<stdio.h>
#include<memory.h>
const int maxn=401;
int edge[maxn][maxn];//邻接矩阵存储
int color[maxn];//标记顶点颜色
int n,m;
bool dfs(int u,int c)
{
    color[u]=c;//对u点进行染色
    for(int i=1;i<=n;i++)//遍历与u点相连的点
    {
        if(edge[u][i]==1)//如果i点与u点相连
        {
            if(color[i]==c) return false;//i点的染色重复，则不是二分图
            if(!color[i]&&!dfs(i,-c)) return false;//该点未染色，染上相反的颜色.dfs继续搜索
        }
    }
    return true;//所有点染色完成之后，并且相邻顶点没有同色，则为二分图
}
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        memset(edge,0,sizeof(edge));
        memset(color,0,sizeof(color));
        for(int i=0;i<m;i++)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            edge[u][v]=1;//无向图，因此uv和vu都需要
            edge[v][u]=1;
        }
        bool flag=false;
        for(int i=1;i<=n;i++)
        {
            if(!color[i])
            {
                if(!dfs(i,1))
                {
                    printf("No\n");
                    flag=true;
                }
            }
        }
        if(!flag) printf("Yes\n");
    }
    return 0;
}

