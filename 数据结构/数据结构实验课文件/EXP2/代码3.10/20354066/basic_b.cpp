#include <stdio.h>
#include <stdlib.h>

int m;  //������ 

struct node{
	int data;
	struct node *next;
};
node *head; // headָ��ͷ�ڵ� 

void insert(int i, int x){//����x��a[i-1] 
node *p;
if(head=NULL)
{
p=(node*) malloc(sizeof(node));
head=p;
}
else
{
for(int j=0;j<i-1;j++)
p=p->next;
p->data=x;
}
}

void deleteByIndex(int i){ //ɾ��a[i-1] 
node *p,*q;
p=head;
q=head->next;
} 

void find(int x){//���ҵ�һ��x 
node *p;
p=head;
int k=0;
int l=0;
while(p)
{
k++;
if(p.data==x)
{
l++;
printf("%d\n",k);
break;
}
p=p->next;
}
if(l==0)
printf()

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

