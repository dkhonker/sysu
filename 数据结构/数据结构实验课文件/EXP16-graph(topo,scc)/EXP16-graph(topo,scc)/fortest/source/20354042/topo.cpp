#include<stdio.h>
const int maxn = 50010;

struct node{
	int x;
	node * next;
};

int n, m;
node * head[maxn]; // 注意：头节点的x存的是入度。 

void topo(){
	int que[maxn], l = 0, r = 0;//队列 
	for (int i = 1; i <= n; i++)
		if (head[i]->x == 0) que[r++] = i;//将所有入度为0的顶点入队 
	while (l < r){
		//add some code here.
		printf("%d ",que[l]);//先写出一个顶点
		head[que[l]]->x--; 
		node *p;
		p=head[l];
		while(p->next!=NULL)
		{
			p=p->next;
			head[p->x]->x--;//将所有该点的顶点的入度-1 
		}
		for (int i = 1; i <= n; i++)
		{	
			if (head[i]->x == 0) que[r++] = i;
		}//将所有入度为0的顶点入队 
		l++; 
	}
}

int main(){
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
		//add some code here
		p->x=y;
		p->next=NULL;
		node *q;
		q=head[x];
		while(q->next!=NULL) 
		{
			q=q->next; 
		}
		q->next=p;
		head[y]->x++; //y的入度加一 
	}

	topo();
	
	return 0;
}
