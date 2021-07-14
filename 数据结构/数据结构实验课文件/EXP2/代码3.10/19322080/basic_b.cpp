#include <stdio.h>
#include <stdlib.h>

int m;  //������ 

struct node{
	int data;
	struct node *next;
};
node *head; // headָ��ͷ�ڵ� 

void insert(int i, int x){//����x��a[i]
 	if(head==NULL)
 	{
 		return;
	}
	int k;
	struct node*t1,node* t2;
	t1=head;
	t2=t1->next;
	for(k=0;k<i;k++)
	{
		if(t2==NULL)
		{
			break;
		}
		t1=t2->next;
		t2=t1->next;
	}
	if(k==i-1)
	{
		t2=(struct node*)malloc(sizeof(struct node));
		t2->data=x;
		t2->next=t1->next;
		t1->next=t2;
	}
} 

void deleteByIndex(int i){ //ɾ��a[i] 
	if(head==NULL)
	{
		return 0;
	}
	int k;
	struct node*t1,node* t2;
	t1=head;
	t2=t1->next;
	for(k=1;k<=i;k++)
	{
		if(t2==NULL)
		{
			break;
		}
		t1=t2->next;
		t2=t1->next;
	}
	
} 

void find(int x){//���ҵ�һ��x 
}

void eliminateRepeat(){ //ȥ���ظ�Ԫ�� 
}

void count(int x, int y){//ͳ��[x,y]��Ԫ�ظ���	
	int k = 0;
	node *p = head->next; 
	while (p != NULL){
		if (p->data >= x && p->data <= y) k++;
		p = p->next;
	}
	printf("%d\n", k);
}

void deleteByRange(int x, int y){ //ȥ��[x,y]��Χ�ڵ�Ԫ�� 
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

