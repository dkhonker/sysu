#include<stdio.h>
const int maxn = 50010;

struct node{
	int x;
	node * next;
};

int n, m;
node * head[maxn]; // ע�⣺ͷ�ڵ��x�������ȡ� 

void topo(){
	int que[maxn], l = 0, r = 0;
	int count;int k;
	for (int i = 1; i <= n; i++)
		if (head[i]->x == 0) que[r++] = i;
	while (l < r){
		//add some code here.
		int j = que[--r];
		count++;
		printf("%d ",j);
		while(head[j]->next)
		{
			k = (head[j]->next)->x;
			(head[k]->x)--;
			if(head[k]->x == 0)que[r++] = k;
			head[j]->next = head[j]->next->next;
			
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
		head[x]->next = p;
		p->x = y;p->next=NULL;
		head[y]->x++; //y����ȼ�һ 
	}
	topo();
	return 0;
}
