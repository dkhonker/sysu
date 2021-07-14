#include<stdio.h>
const int maxn = 50010;

struct node{
	int x;
	node * next;
};

int n, m;
node * head[maxn];
//node *next[maxn]; // ע�⣺ͷ�ڵ��x�������ȡ� 

void topo(){
	int que[maxn], l = 0, r = 0;
	int count;
	for (int i = 1; i <= n; i++)
		if (head[i]->x == 0) que[r++] = i;
	while (l < r){
		int j;
		j=que[r--]; 
		printf("%d\n",j);
	    node* p=head[j]->next;
		while(p){
			p->x--;if(p->x==0)
			{
				que[r++]=j;
				p=p->next;
			}
		}
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
		//add some code here
	    p=head[x]->next;
		head[y]->x++; //y����ȼ�һ 
	}
	topo();
	return 0;
}
