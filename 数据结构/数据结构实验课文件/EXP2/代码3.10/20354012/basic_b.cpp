#include <stdio.h>
#include <stdlib.h>

int m;  //������ 

struct node{
	int data;
	struct node *next;
}Node;
node *head; // headָ��ͷ�ڵ� 

void insert(int i, int x){//����x��a[i] 
int  j=0;  Node *p = L��*q;
while  ( p!=NULL &&  j<i-1)   
{ p=p�C>next;  j++;   }
if  (j!=i-1)   
  printf(��i̫���iΪ0!!\n ��); 
else{
  q=(LNode *)malloc(sizeof(LNode));
  q�C>data=e;   q�C>next=p�C>next;  p�C>next=q;

} 

void deleteByIndex(int i){ //ɾ��a[i] 
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

