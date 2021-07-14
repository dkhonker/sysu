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
		int v=que[l++];
		printf("%d ",v);
		node* p=head[v];
		while(p->next!=NULL){
		    	p=p->next;
		    	int u=p->x;
		    	head[u]->x--;
		    	if(head[u]->x==0){
				  que[r++]=u; 
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
		p->x=y;
		node*q;
		q=head[x];
		while(q->next!=NULL){
			q=q->next;
		}
		q->next=p;
		p->next=NULL;
		//add some code here
		head[y]->x++; //y的入度加一 
	}
	/*for(int i=1;i<=n;i++){
		printf("%d ",i);
			for(int j=1;j<=d[i];j++){
			    int u=a[i][j];
			    printf("%d ",u);
			}
			printf("\n");
	}*/
	topo();
	return 0;
}
