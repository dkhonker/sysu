#include<stdio.h>
#include<memory.h>
const int maxn=401;
int edge[maxn][maxn];//�ڽӾ���洢
int color[maxn];//��Ƕ�����ɫ
int n,m;
bool dfs(int u,int c)
{
    color[u]=c;//��u�����Ⱦɫ
    for(int i=1;i<=n;i++)//������u�������ĵ�
    {
        if(edge[u][i]==1)//���i����u������
        {
            if(color[i]==c) return false;//i���Ⱦɫ�ظ������Ƕ���ͼ
            if(!color[i]&&!dfs(i,-c)) return false;//�õ�δȾɫ��Ⱦ���෴����ɫ.dfs��������
        }
    }
    return true;//���е�Ⱦɫ���֮�󣬲������ڶ���û��ͬɫ����Ϊ����ͼ
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
            edge[u][v]=1;//����ͼ�����uv��vu����Ҫ
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

