/* ������ֻ�������������籯���ȡ� 2021.04.07*/
#include <stdio.h>
#include <stdlib.h>

int m;  //������ 

struct node{
	int data;
	struct node *next;
};
node *head; // headָ��ͷ�ڵ� 

void insert(int i, int x){//����x��a[i] 
	node *p = head;
	while (i > 1){
		p = p->next; i--;
	} 
	node *q = (node*) malloc(sizeof(node));
	//add something here
	q->data = x;
	q->next = p->next;
	p->next = q; 
} 


void find(int x)
{//���ҵ�һ��x 
	node *p = head->next; 
	int j = 1;
	while(p!=NULL &&p->data != x)
	{
		p = p->next;
		j++;
	}
	//add something here
	if (p == NULL) j = 0;
	printf("%d\n", j);
}

void deleteByRange(int x, int y)//ȥ��[x,y]��Χ�ڵ�Ԫ�� 
{ 
	node *p1 = head;
	node *p2 = head->next;
	while (p2 != NULL)
	{
		if (p2->data >= x && p2->data <= y)
		{
			p1->next = p2->next; 
			free(p2); 
			p2 = p1->next;
		}
		else
		{
			p1 = p2; 
			p2 = p1->next;
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
			case 2: scanf("%d", &x); find(x); break;
			case 3: scanf("%d%d", &x, &y); deleteByRange(x, y); break;
		}
	}
	return 0;
}
