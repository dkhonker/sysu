#include<stdio.h>
const int maxn = 50010;

struct node{
	int x;
	node * next;
};

int n, m;
node * head[maxn]; // 注意：头节点的x存的是入度。 

void topo(){
	int que[maxn], j= 0, r = 0;
	for (int i = 1; i <= n; i++)
		que[i] = 0;
	for (int i = 1; i <= n; i++)
		if (head[i]->x == 0) que[r++] = i;//染色
	while (0 < r){
		 j = que[--r];
		 printf("%d ", j);
		 node *p = head[j]->next;
		 while (p) {
			 int k = p->x;
			 head[k]->x--;
			 if (head[k]->x == 0) {
				 que[r++] = k;}
				 p = p->next;
			 
		 }
		//将染色的输出，再染色，再输出
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
		//用邻接表
		p->next = head[x]->next;
		p->x = y;
		head[x]->next = p;
		//add some code here
		head[y]->x++; //y的入度加一 
	}
	topo();
	return 0;
}
