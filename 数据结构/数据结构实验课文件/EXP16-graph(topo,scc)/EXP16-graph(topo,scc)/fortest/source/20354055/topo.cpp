#include<stdio.h>
const int maxn = 50010;

struct node{
	int x;
	node * next;
};

int n, m;
node * head[maxn]; 

void topo(){
lable:
	for (int i = 1; i <= n; i++)
		if (head[i]->x == 0) 
		{
		printf("%d",i);head[i]->x=-1;
		
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
		node*p = new node;p->next=NULL;p->x=x;
		node*q;q=head->next;
		for(int i=0;i<x;i++)q=q->next;q=p;
		head[y]->x++;  
	}
	topo();
	return 0;
}
