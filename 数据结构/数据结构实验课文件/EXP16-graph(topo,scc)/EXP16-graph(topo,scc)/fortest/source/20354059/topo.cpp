#include<stdio.h>
const int maxn = 50010;

struct node{
	int x;
	node * next;
};

int n, m;
node * head[maxn]; // 注意：头节点的x存的是入度。 

void topo(){
	int que[maxn], r = 0;
	for (int i = 1; i <= n; i++)
		if (head[i]->x == 0) que[r++] = i;
	while (0 < r){
		int j;
		j=que[r--];
		printf("%d ",j);
		node*p = new node;
		p=head[j]->next;
		while(p){		
			int k;
			k=p->x;
			head[k]->x--;
			if(head[k]->x==0) {
				que[r++]=k;
			}
			p=p->next;	
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
		p->x=y;
		p->next=head[x]->next;
		head[x]=p; 
		//add some code here
		head[y]->x++; //y的入度加一 
	}
	topo();
	return 0;
}
