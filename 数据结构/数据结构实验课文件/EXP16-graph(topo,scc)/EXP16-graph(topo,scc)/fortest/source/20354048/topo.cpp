#include<stdio.h>
const int maxn = 50010;

struct node{
	int x;
	int next[maxn];
	int countnext;
};

int n, m;
node * head[maxn]; // 注意：头节点的x存的是入度。 

void topo(){
	int que[maxn], l = 0, r = 0,tempi;
	node* temp;
	for (int i = 1; i <= n; i++)
		if (head[i]->x == 0)
		{
			head[i]->x--;
			que[r++] = i;	
		}
	while (l < r){
		tempi=que[l];
		printf("%d ",tempi);
		temp=head[que[l++]];
		for(int i=0;i<temp->countnext;i++){
			head[temp->next[i]]->x--;
		}
		for (int i = 1; i <= n; i++)
			if (head[i]->x == 0)
			{
				head[i]->x--;
				que[r++] = i;
			}
	}
}

int main(){
	scanf("%d%d",&n,&m);
	for (int i = 1; i <= n; i++){
		head[i] = new node; 
		head[i]->x = 0;
		head[i]->countnext=0;
	}
	for (int i = 1; i <= m; i++) {
		int x, y;
		scanf("%d%d",&x,&y);
		head[x]->next[head[x]->countnext]=y;
		head[x]->countnext++;
		//add some code here
		head[y]->x++; //y的入度加一 
	}
	topo();
	return 0;
}
