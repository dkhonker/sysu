#include <iostream>

using namespace std;
const int maxn=10000;

int G[10000][10000];
//stack<int>st;

int dfn[maxn]={0},low[maxn]={0},visit[maxn]={0};
int time=1;//����ʱ��
int n,m;//�ڵ����Լ�����
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
    st.push(s);//��ջ
    dfn[s]=low[s]=time++;//�½���ĳ�ʼ��
    visit[s]=1;//s��ջ��
    for(int i=0;i<len[s]/*<G[s].size()*/;i++)
    {
        int v=G[s][i];//ȡ���ӽڵ�
        if(!dfn[v])//δ����Ƿ��ʹ�
        {
            tarjan(v);
            low[s]=min(low[s],low[v]);
        }
        else if(visit[v])//�Ѿ����ʲ����Ѿ���ջ����//˵���ɻ�
        {
            low[s]=min(low[s],low[v]);//�ȽϷ��ʵ��Ⱥ�ó��Ӹ���ϵ�������Ӷ�Ӧ��ϵ
        }
    }
    if(low[s]==dfn[s]) //��ǿ��ͨ�����ĸ��ڵ�
    {
        int u;
        int count = 0;
        
        do
        {
            u=st.top();
           //printf("%d ",u);
            outcome[index] = ++count;
            visit[u]=0;//��ջ
            st.pop();//����
        }
        while(u!=s);
       	//printf("%d ",outcome[index++]);
       	index++;
    }
}


int main()
{
    scanf("%d %d",&n,&m);//����
    int u,v;
    index = 0;
    int j = 0;
    for(int i=0;i<m;i++)
    {
    	
        scanf("%d%d",&u,&v);
        G[u][len[u]++] = v;
		//G[u].push_back(v);//��ͼ
    }
    for(int i=1;i<=n;i++)
    {
        if(!dfn[i]) tarjan(i);
    }
    mergesort(outcome,0,index-1);
    for(int i = 0;i<index;i++) printf("%d ",outcome[i]);
    return 0;
}

