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
		node* c=head[j]->next;
		while(c) 
		{
			int k=c->x;
			head[k]->x--;
			head[0]->x++;
			if(head[k]->x==0)que[r++]=k;
			c=c->next;
		}
		if(head[0]->x<n)printf("该图有回路");
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
		head[x]->next=p;
		//add some code here
		head[y]->x++; //y的入度加一 
	}
	topo();
	return 0;
}
