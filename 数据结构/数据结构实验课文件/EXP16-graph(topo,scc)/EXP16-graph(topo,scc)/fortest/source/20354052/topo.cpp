#include<stdio.h>
#include<malloc.h>
const int maxn = 50010;

struct node
{
	int x;
	node * next;
};

int n, m;
node * head[maxn]; // 注意：头节点的x存的是入度。 

void topo()
{
	int que[maxn], l = 0, r = 0;
	for (int i = 1; i <= n; i++)
		if (head[i]->x == 0) que[r++] = i;
	while (r > l)
	{
		int s = que[--r]; 	
		printf("%d ",s);
		node * p = NULL;
		p = head[s]->next;
		while(p)
		{
			head[p->x]->x--;
			if(head[p->x]->x == 0)
			{
				que[r++] =p->x;
			}
			p = p->next;
		}
		//add some code here.
	}
}

int main(){
	scanf("%d%d",&n,&m);
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
		p = head[x]->next;
		while(p)
			p = p->next;
		p = head[y];
		//add some code here
		p->x++; //y的入度加一 
	}
	topo();
	return 0;
}
