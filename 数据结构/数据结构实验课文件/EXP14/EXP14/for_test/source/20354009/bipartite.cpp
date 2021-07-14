//判断二分图的常见方法是染色法：用两种颜色，对所有顶点逐个染色，
//且相邻顶点染不同的颜色，如果发现相邻顶点染了同一种颜色，就认为此图不为二分图。
//当所有顶点都被染色，且没有发现同色的相邻顶点，就退出。
#include<stdio.h>
#include<memory.h>
const int maxn=401;

int edge[maxn][maxn];   //邻接矩阵
int color[maxn];      //0: uncolored.   -1 +1  : colored black or white.
int n;

bool dfs(int u,int c){
    color[u]=c;     //对u点进行染色操作 
    for(int v=1;v<=n;v++)//遍历与u点相连的点
        if(edge[u][v]==1)//如果顶点存在 
		{
            if(color[v]==c) 
				return false;//如果颜色重复，就返回false 
            if(!color[v])
                {dfs(v,-c);//如果还未涂色，就染上相反的颜色-c,并dfs这个顶点，进入下一层
				return false;}
        }
	return true;//如果所有顶点涂完色，并且没有出现同色的相邻顶点，就返回true
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
		//将某一块内存中的内容全部设置为指定的值，这个函数通常为新申请的内存做初始化工作。
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
//输入流cin无论什么情况下都会忽略tab、空格、回车等分隔符
//scanf函数在除scanf("%c",&char)之外的所有情况都不会把回车符作为输入字符在输入缓存中读取
//但scanf("%c",&char)也不会读取tab、空格，而是把他们作为分隔符在输入缓存中忽略。





