#include <iostream>

using namespace std;
const int maxn=10000;

int G[10000][10000];
//stack<int>st;

int dfn[maxn]={0},low[maxn]={0},visit[maxn]={0};
int time=1;//访问时间
int n,m;//节点数以及边数
int outcome[10000] = {0};
int index;
int len[maxn] = {0};

typedef struct stack
{
	int arr[maxn];
	int top_index = 1;
	void push(int num)
	{
		arr[top_index++] = num;
	}
	

	int pop()
	{
		return arr[--top_index];
	}
	
	int top()
	{
		return arr[top_index-1];
		
	}
	
}stack;

stack st;

void merge(int arr[], int left, int middle, int right){
	int i, j;
	int n1=middle-left+1, n2=right-middle;
	int L[n1], R[n2];
	for(i=0;i<n1;i++) L[i]=arr[left+i];
	for(j=0;j<n2;j++) R[j]=arr[middle+1+j];

	i=j=0;
	int k=left;
	while(i<n1 && j<n2)
		if(L[i]>=R[j]) arr[k++] = L[i++];
		else  arr[k++] = R[j++];
	while (i<n1) arr[k++] = L[i++];
	while (j<n2) arr[k++] = R[j++]; 
}

void mergesort(int arr[],int left, int right){
	if(left<right){
		int middle=(left+ right)/2;
		mergesort(arr, left, middle);
		mergesort(arr, middle+1,right);
		merge(arr, left, middle, right);
	}
}

void tarjan(int s)
{
    st.push(s);//入栈
    dfn[s]=low[s]=time++;//新进点的初始化
    visit[s]=1;//s在栈里
    for(int i=0;i<len[s]/*<G[s].size()*/;i++)
    {
        int v=G[s][i];//取出子节点
        if(!dfn[v])//未被标记访问过
        {
            tarjan(v);
            low[s]=min(low[s],low[v]);
        }
        else if(visit[v])//已经访问并且已经在栈里面//说明成环
        {
            low[s]=min(low[s],low[v]);//比较访问的先后得出子父关系就是连接对应关系
        }
    }
    if(low[s]==dfn[s]) //是强连通分量的根节点
    {
        int u;
        int count = 0;
        
        do
        {
            u=st.top();
           //printf("%d ",u);
            outcome[index] = ++count;
            visit[u]=0;//出栈
            st.pop();//弹出
        }
        while(u!=s);
       	//printf("%d ",outcome[index++]);
       	index++;
    }
}


int main()
{
    scanf("%d %d",&n,&m);//输入
    int u,v;
    index = 0;
    int j = 0;
    for(int i=0;i<m;i++)
    {
    	
        scanf("%d%d",&u,&v);
        G[u][len[u]++] = v;
		//G[u].push_back(v);//构图
    }
    for(int i=1;i<=n;i++)
    {
        if(!dfn[i]) tarjan(i);
    }
    mergesort(outcome,0,index-1);
    for(int i = 0;i<index;i++) printf("%d ",outcome[i]);
    return 0;
}

