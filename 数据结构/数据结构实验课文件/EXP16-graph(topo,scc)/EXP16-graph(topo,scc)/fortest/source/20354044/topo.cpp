#include<stdio.h>
const int maxn = 50010;

struct node{
	int x;
	node * next;
	int id;
};

int n, m;
node * head[maxn]; // 注意：头节点的x存的是入度。 

void topo(){
	int que[maxn], l = 0, r = 0;
	for (int i = 1; i <= n; i++)
		if (head[i]->x == 0) que[r++] = i;
	while (l < r){
		int t = que[l++];
		node* j = head[t]->next;
   while(j!=NULL)
{//printf("%d",j->id);
             //printf("ok");
      head[j->id]->x--;
	   if(head[j->id]->x== 0) {
             	//printf("yes");
			 que[r++] = j->id;
		//	j=head[j->id]->next;
			 //printf("%d",j->id);
			// continue;
			 } 
		//add some code here.
	//	printf("%d",j->id);
		j = j->next;
	//	printf("%d",j->id);
	}         
 


}
for(int i = 0;i < n;++i)printf("%d ",que[i]) ;
}

int main(){
	scanf("%d%d",&n,&m);
	for (int i = 1; i <= n; i++){
		head[i] = new node; 
		head[i]->x = 0;
		head[i]->next = NULL;
		head[i]->id=i;
	}
	for (int i = 1; i <= m; i++) {
		int x, y;
		scanf("%d%d",&x,&y);
		node*p = new node;
		node*q = new node;
		q->id=y;
		for(p=head[x];p->next!=NULL;){p=p->next;
	//	printf("ok");
		}
		p->next=q;
		q->next=NULL;
		//add some code here
		head[y]->x++; //y的入度加一 
	}
	topo();
	return 0;
}
