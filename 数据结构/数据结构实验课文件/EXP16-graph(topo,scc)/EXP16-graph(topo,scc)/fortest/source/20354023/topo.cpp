#include<stdio.h>
const int maxn = 50010;

struct node{
	int x;
	node * next;
};

int n, m;
node* head[maxn];   //头结点的x存的是入度；后续结点的x存的是邻接点 

void topo(){
	int que[maxn], l = 0, r = 0;
	
	for (int i = 1; i <= n; i++)
		if (head[i]->x == 0) que[r++] = i;   //启动阶段，将入度为0的结点入队 
		
	while (l < r){
		int j = que[l++];
		printf("%d ", j);   //出队 
		
		node* p = head[j]->next;
		while(p != NULL){
			(head[p->x]->x)--;   //j的邻接点的入度-1 
			if (head[p->x]->x == 0) que[r++] = p->x;   //需要立刻判断：是否是刚刚生成的入度为0（因为前面的结点已经全部为0了） 
			
			p = p->next;   //依次遍历j的邻接点 
		}
	}
}

int main(){
	scanf("%d %d", &n, &m);
	
	for (int i = 1; i <= n; i++){
		head[i] = new node; 
		head[i]->x = 0;
		head[i]->next = NULL;
	}
	
	for (int i = 1; i <= m; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		node* p = new node;
		
		p->x = y;
		p->next = head[x]->next;
		head[x]->next = p;   //用头插入法，建立邻接表 
		
		(head[y]->x)++;   //y的入度+1 
	}

	topo();
	
	return 0;
}
