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
		 node* k=head[j]->next;
		 head[k->x]--;
		//add some code here.
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for (int i = 1; i <= n; i++){
		head[i] = new node; 
		head[i]->x = 0;
		head[i]->next = NULL;
	}
	for (int i = 1; i <= m; i++) {
		int x, y;
		scanf("%d %d",&x,&y);
		node*p = new node;
		p=head[x];
		while(p->next) p=p->next;
		p->next=head[y];
		//add some code here
		head[y]->x++; //y的入度加一 
	}
	topo();
	return 0;
}
