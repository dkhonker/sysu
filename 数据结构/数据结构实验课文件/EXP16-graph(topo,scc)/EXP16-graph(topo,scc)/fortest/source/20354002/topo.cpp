#include<stdio.h>
const int maxn = 50010;

struct node{
	int x;
	node * next;
};

int n, m;
node * head[maxn]; // 注意：头节点的x存的是入度。 

void topo(){
	int que[maxn], l = 0, r = 0;
	for (int i = 1; i <= n; i++)
		if (head[i]->x == 0) que[r++] = i;
	while (l < r){
	int j=que[r--];
	printf("%d ",j);
	node *q=head[j]->next;
	while(q)
	{
		int k=q->x;
	head[k]->x--;
	if(head[k]->x==0)
	{
	que[r++]=k;	//add some code here.
	}
	q=q->next;
}
}
}

int main()
{
	scanf("%d%d",&n,&m);
	for (int i = 1; i <= n; i++){
		head[i] = new node; 
		head[i]->x = 0;
		head[i]->next = NULL;
	}
	for (int i = 1; i <= m; i++) {
		int x, y;
		scanf("%d%d",&x,&y);
		node*p = new node;
		p->x=y;
		p->next=head[x]->next;
		head[x]->next=p;
		//add some code here
		head[y]->x++; //y的入度加一 
	}
	topo();
	return 0;
}
