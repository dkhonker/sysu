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
		printf("%d ",que[l]);
		node*p=head[que[l]]->next;
		while(p!=NULL){
			head[p->x]->x--;
			p=p->next;
		}
		head[que[l]]->x=-1;
		l++;
		topo();
		//add some code here.
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
		p->x=y;
		node*q=head[x];
		while(q->next!=NULL) q=q->next;
		q->next=p;
		//add some code here
		head[y]->x++; //y的入度加一 
	}
	topo();
	return 0;
}
