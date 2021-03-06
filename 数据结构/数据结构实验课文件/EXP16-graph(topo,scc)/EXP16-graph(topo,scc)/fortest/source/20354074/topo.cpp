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
		node*p = new node;
		p = head[que[l]];
		while(p->next!=NULL)
		{
			p=p->next;
			head[p->x]->x--;
		}
		printf("%d ",que[l]);
		head[que[l]]->x=1;
		l++;//add some code here.
	}
	topo();
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
		scanf("%d %d",&x,&y);
		node*p = new node;
		//add some code here
		p=head[x];
		while(p->next!=NULL)
		{
			p=p->next;
		}
		node*q=new node;
		q->x=0;
		q->next=NULL;
		p->next=q;
		p->next->x=y;
		head[y]->x++; //y的入度加一 
	}
	topo();
	return 0;
}
