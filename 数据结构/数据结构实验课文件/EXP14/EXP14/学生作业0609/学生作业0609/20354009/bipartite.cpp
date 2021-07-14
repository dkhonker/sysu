//�ж϶���ͼ�ĳ���������Ⱦɫ������������ɫ�������ж������Ⱦɫ��
//�����ڶ���Ⱦ��ͬ����ɫ������������ڶ���Ⱦ��ͬһ����ɫ������Ϊ��ͼ��Ϊ����ͼ��
//�����ж��㶼��Ⱦɫ����û�з���ͬɫ�����ڶ��㣬���˳���
#include<stdio.h>
#include<memory.h>
const int maxn=401;

int edge[maxn][maxn];   //�ڽӾ���
int color[maxn];      //0: uncolored.   -1 +1  : colored black or white.
int n;

bool dfs(int u,int c){
    color[u]=c;     //��u�����Ⱦɫ���� 
    for(int v=1;v<=n;v++)//������u�������ĵ�
        if(edge[u][v]==1)//���������� 
		{
            if(color[v]==c) 
				return false;//�����ɫ�ظ����ͷ���false 
            if(!color[v])
                {dfs(v,-c);//�����δͿɫ����Ⱦ���෴����ɫ-c,��dfs������㣬������һ��
				return false;}
        }
	return true;//������ж���Ϳ��ɫ������û�г���ͬɫ�����ڶ��㣬�ͷ���true
}

int main()
{
    int k;
    scanf("%d",&k);
    for(int m=1;m<=k;m++)
	{
    	scanf("%d",&n);
    	memset(edge,0,sizeof(edge));
        memset(color,0,sizeof(color));
		//��ĳһ���ڴ��е�����ȫ������Ϊָ����ֵ���������ͨ��Ϊ��������ڴ�����ʼ��������
		 for(int u = 0; u < n; u++)
		 {
		 for(int v=0;v<n;v++)
		 {
		 	scanf("%d",&edge[u][v]);
            edge[v][u] = edge[u][v];
        }
    }
		bool flag=true;
		for(int i=1;i<=n;i++)
		{
			if(!color[i])
			{ 
			if(!dfs(i, 1))
			{
				flag=false;
                printf("No\n");	
                break;
            } 
			} //Hint:  call dfs.  if it retruns false, print some information saying this is not a biparptite graph and REMEMBER TO break and set the flag variable to be false. 
		}
		if(flag) 
		printf("Yes\n");
	}
	return 0;
}
//������cin����ʲô����¶������tab���ո񡢻س��ȷָ���
//scanf�����ڳ�scanf("%c",&char)֮����������������ѻس�����Ϊ�����ַ������뻺���ж�ȡ
//��scanf("%c",&char)Ҳ�����ȡtab���ո񣬶��ǰ�������Ϊ�ָ��������뻺���к��ԡ�





