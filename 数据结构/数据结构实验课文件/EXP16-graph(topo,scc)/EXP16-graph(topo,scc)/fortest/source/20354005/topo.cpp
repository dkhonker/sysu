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
		node *p=NULL;
		int q,k;
	while (l < r){
		//add some code here.
		q=que[r-1];
		r--;
		printf("%d ",q);
	    p=head[q]->next;
	    while(p!=NULL)
		{
			k=p->x;
			head[k]->x--;
			if(head[k]->x==0)
			que[r++]=k;
			p=p->next;
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
		p->x=y; 
		p->next=head[x]->next;
		head[x]->next=p;
		head[y]->x++; //y的入度加一 
	}
	topo();
	return 0;
}
