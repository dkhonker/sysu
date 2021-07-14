#include <stdio.h>
#include <stdlib.h>

int m;  //命令数 
int result[10001];
int t = 1;
struct node{
	int data;
	struct node *next;
};
node *head;   // head指向头节点 

void insert(int i, int x)    //插入x到a[i-1] 
{
	node *now = head;
	while (i > 1){
		now = now->next; 
		i--;
	} 
	node *p = (node*) malloc(sizeof(node));
	p->data = x; 
	p->next = now->next; 
	now->next = p;
} 

void deleteByIndex(int i)   //删除a[i-1] 
{
	node *now = head;
	node *p = head->next;
	while (i > 1){
		now = p; p = now->next; i--;
	}
	now->next = p->next;
	free(p);
} 

void find(int x)           //查找第一个x 
{
	node *p = head->next; 
	int j = 1;
	while (p != NULL && p->data != x){
		p = p->next; j++;
	}
	if (p == NULL) j = 0;
	//result[t] = j;
	//t++;
	printf("%d\n", j);
}

void eliminateRepeat()    //去除重复元素 
{ 
	node *r = head->next, *p, *q;
	while (r != NULL){
		p = r; q = r->next;
		while (q != NULL){
			if (q->data == r->data){
				p->next = q->next; free(q);	q = p->next;
			}
			else{
				p = q; q = p->next;
			}
		}
		r = r->next;
	}
}

void count(int x, int y){//统计[x,y]中元素个数	
	int k = 0;
	node *p = head->next; 
	while (p != NULL){
		if (p->data >= x && p->data <= y) k++;
		p = p->next;
	}
	//result[t] = k;
	//t++;
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
	for(int i=1;i<t;i++)
	{
		printf("%d\n",result[i]);
	}
	return 0;
}

