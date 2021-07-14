#include<stdio.h>
#include <malloc.h>
const int maxn = 50010;

struct node{
	int k;
	int data;
	node * next;
};

int n, m;
node * head[maxn]; // 注意：头节点的x存的是入度。 
 
void topo(){
	int que[maxn], l = 0, r = 0;
	for (int i = 1; i <= n; i++)
		if (head[i]->k == 0) que[r++] = i;
	while (l < r){
		//add some code here.
		printf("%d ",que[--r]);
		node *p = head[que[r]];
		while(p->next!=NULL){
			p = p->next;
			head[p->data]->k--;
			if(head[p->data]->k==0) que[r++] = p->data;
		}
	}
}

int main(){
	scanf("%d%d",&n,&m);
	for (int i = 1; i <= n; i++){
		head[i] = (node*) malloc(sizeof(node*)); 
		head[i]->k = 0;
		head[i]->data = i;
		head[i]->next = NULL;
	}
	for (int i = 1; i <= m; i++) {
		int x, y;
		scanf("%d%d",&x,&y);
		node*p = (node*)malloc(sizeof(node*));
		//add some code here
		p = head[x];
		while(p->next!=NULL) p = p->next;
		p->data = y;
		head[y]->k++; //y的入度加一 
	}
	topo();
	return 0;
}
