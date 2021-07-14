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
		//add some code here.
		printf("%d",que[l++]);
		node* a=head[que[l]]->next;
		while(a->x!=0)
		{
			head[a->x]--;
			que[r++]=a->x;
		}
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
		node* q=head[x];
		if (q->next!=NULL)
			q=q->next;
		q->next =p;
		p->x = y;
		head[y]->x++; //y的入度加一 
	}
	topo();
	return 0;
}
