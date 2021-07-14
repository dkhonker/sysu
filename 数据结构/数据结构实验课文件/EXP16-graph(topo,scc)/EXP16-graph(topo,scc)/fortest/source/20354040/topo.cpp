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
		//add some code here.
		printf("%d ",que[l]);
		head[que[l]]->next->x--;
		head[que[l]]->next=NULL;
		head[que[l]]->x=-1;
		l++;
		
	}topo();
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
		head[x]->x=0;
		head[x]->next=head[y];
		//add some code here
		head[y]->x++; //y的入度加一 
	}
	topo();
	return 0;
}
