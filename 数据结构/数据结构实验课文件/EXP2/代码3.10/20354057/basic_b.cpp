#include <stdio.h>
#include <stdlib.h>

int m;  //������ 

struct node{
	int data;
	struct node *next;
};
node *head; // headָ��ͷ�ڵ� 

void insert(int i, int x){//����x��a[i] 
int j;
node *p;
node *s;
p=head;
j=0;
while(p&&j<i-1)
{
	p=p->next;
	j++;
}
s->data=x;
s->next=p->next;
p->next=s;
} 

void deleteByIndex(int i){ //ɾ��a[i] 
int j;
node *p,q;
p=head;
j=0;
while((p->next)&&(j<i-1))
{
	p=p->next;
	j++;
}
q=p->next;
p->next=q->next;
delete q;
} 

void find(int x){//���ҵ�һ��x 
node *p;
p=head->next;
count=0
while(p&&p->data!=x)
	{
	p=p->next;
	count++;
}
if(!p)
	printf("0");
else:
	printf("%d",count)
	

}

void eliminateRepeat(){ //ȥ���ظ�Ԫ�� 
node *p,q;
p=head->next;
while((p->next)){
	q=p->next;
	while(q){
		if(q->data!=p->data)
		{
			p->next=q;
		}
		q=q->next;
	}
	p=p->next;
}
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

