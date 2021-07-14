#include<stdio.h>
const int maxn = 50010;

struct node
{
	int x;     //存入度 
	node * next;
};

int n, m;
node * head[maxn]; // 注意：头节点的x存的是入度。 

void topo()
{
	int que[maxn], l = 0, r = 0;
	for (int i = 1; i <= n; i++)
		if (head[i]->x == 0) que[r++] = i;
	while (l < r)
	{
		int k=que[r--];     //栈顶出栈 
		printf("%d ",k);
		head[k]->next->x--;
		if(head[k]->next->x==0)
		{
			for(int i=1;i<=n;i++)
			{
				if(head[i]->x==0) que[r++]=i;
			}
		}//add some code here.
	}
}

int main()
{
	scanf("%d%d",&n,&m);     //共有n个节点、m条边 
	for (int i = 1; i <= n; i++)
	{
		head[i] = new node; 
		head[i]->x = 0;
		head[i]->next = NULL;
	}
	for (int i = 1; i <= m; i++) 
	{
		int x, y;
		scanf("%d%d",&x,&y);
		node*p = new node;
		//add some code here
		head[y]->x++; //y的入度加一 
	}
	topo();
	return 0;
}
