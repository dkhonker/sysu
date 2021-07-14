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
		printf("%d ",que[r]);
		node*p=head[r]->next;
		while(p!=NULL){
			int c=p->x;
			if((--head[c]->x)==0){
				que[r++]=c;
			}
			p=p->next;
		}
		r--;
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
		node*w=head[x]->next;
		while(w!=NULL){
			w=w->next;
		}
		p->x=y;
		p->next=NULL;
		w=p;
		//add some code here
		head[y]->x++; //y的入度加一 
	}
	node*h=head[1]->next;
	while(h!=NULL){
		printf("%d",h->x);
		h=h->next;
	}
	topo();
	return 0;
}
