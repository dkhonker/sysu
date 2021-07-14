#include <stdio.h>
#include <stdlib.h>

int m;  //命令数 

struct node{
	int data;
	struct node *next;
};
node *head; // head指向头节点 
typedef node *cell;

void insert(int i, int x){//插入x到a[i] 
	int j=1;
	cell p=head;
	cell newcell=(cell)malloc(sizeof(struct node));
	if(head->next==NULL)
	{	
		newcell->data=x;
		head->next=newcell;
		newcell->next=NULL;
	}
	else{
		for(;j<=i-1;j++){
			p=p->next;
		}
		newcell->data=x;
		newcell->next=p->next;
		p->next=newcell;
	}
} 

void deleteByIndex(int i){ //删除a[i] 
	cell p=head->next;
	int j=1;
	while(p!=NULL&&j<i-1)
	{
		j++;
		p=p->next;
	}
	if(p!=NULL)
	{
		cell de=p->next;
		p->next=p->next->next;
		free(de);
	}
} 

void find(int x){//查找第一个x 
	cell p=head->next;
	int j=1;
	while(p!=NULL)
	{
		if(p->data==x)
		{
			break;
		}
		p=p->next;
		j++;
	}
	if(p!=NULL)
	{
		printf("%d\n",j);
	}
	else{
		printf("0\n");
	}
}

void eliminateRepeat(){ //去除重复元素 
int num[10000];
int numend=-1;
int i=0,j,pan=0;
cell p=head->next;
while(p!=NULL)
{	
	i++;
		for(j=0;j<=numend;j++)
		{
			if(p->data==num[j])
			{
				deleteByIndex(i);
				pan=1;
				break;
			}
		}
		if(pan==1)
		{
			pan=0;
			numend++;
			num[numend]=p->data;
		}
	p=p->next;
}

}

void count(int x, int y){//统计[x,y]中元素个数	
	int k = 0;
	node *p = head->next; 
	while (p != NULL){
		if (p->data >= x && p->data <= y) k++;
		p = p->next;
	}
	printf("%d\n", k);
}

void deleteByRange(int x, int y){ //去除[x,y]范围内的元素 
	node *p = head;
	node *q = head-> next;
	while (q != NULL){
		if (q->data >= x && q->data <= y){
			p->next = q->next; free(q); q = p->next;
		}
		else{
			p = q; q = p->next;
		}
	}
} 

int main() {
	scanf("%d", &m);
	head = (node*) malloc(sizeof(node));
	head->next = NULL;
	for (int k = 0; k < m; k++){
		int c, i, x, y;
		scanf("%d", &c);
		switch (c){
			case 1: scanf("%d%d", &i, &x); insert(i, x); break;
			case 2: scanf("%d", &i); deleteByIndex(i); break;
			case 3: scanf("%d", &x); find(x); break;
			case 4: scanf("%d%d", &x, &y); count(x, y); break;
			case 5: eliminateRepeat(); break;
			case 6: scanf("%d%d", &x, &y); deleteByRange(x, y); break;
		}
	}
	return 0;
}

