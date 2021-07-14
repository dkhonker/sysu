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
		int pop=que[--r];
		printf("%d ",pop);
		node*p1 = head[pop]->next;
		while(p1->next!=NULL)
		{
			(head[p1->x]->x)--;
			if (head[p1->x]->x==0)
				que[r++] = p1->x; 
			p1=p1->next;
		}
		(head[p1->x]->x)--;
		if (head[p1->x]->x==0)
			que[r++] = p1->x; 
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
		p->x=y;p->next=NULL;
		node*p1 = head[x];
		while(p1->next!=NULL)
			p1=p1->next;	
		p1->next=p; 
		head[y]->x++; //y的入度加一 
		
	}
	topo();
	return 0;
}
