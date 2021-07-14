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
	for (int i = 1; i <= n; i++)
		if (head[i]->x == 0) que[r++] = i;
	while (l < r){
	int j=que[r--];
	node*p=head[j]->next;
	while(p){
	k=p->x;
	head[k]->x--;
	if(head[k]->x==0)que[r++]=k;
	p=p->next;	//add some code here.
	}
}
int j;
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
		p->x=x;
	//add some code here
	
	
	head[y]->x++; //y����ȼ�һ 
	}
	topo();
	return 0;
}
