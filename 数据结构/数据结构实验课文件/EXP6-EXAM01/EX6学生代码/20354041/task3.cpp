#include<stdio.h>
#include<stdlib.h>

typedef char ElementTepy;
int Length;

typedef struct LNode {
	ElementTepy data;
	LNode *next;
}LNode, *LinkList;

LinkList InsertList(LinkList,char,int);
void DeleteList(LinkList, int,int);
void FinfList(LinkList,char);

LinkList InsertList(LinkList head, char data,int i) {
	LinkList q=head;
	LinkList p = (LinkList)malloc(sizeof(LNode));
	p->data = data;
	for (int n = 1; n <= i; n++)
	{
		q = q->next;
	}
	q->data = data;
}

void FinfList(LinkList head,char x) {
	LinkList p=head;
	int i = 0,flag=0;
	while (p->next != NULL) {
		if (p->data == x)
		{
			printf("%d", i);
			flag = 1;
			break;
		}
		else {
			p = p->next;
			i++;
		}
	}
	if (flag == 0) {
		printf("error");
	}
}

void DeleteList(LinkList head, int x,int y) {
	LinkList tail = head, p=head,q;
	int i = 1;
	for (; i < x; i++) {
		p = p->next;
	}
	q = p->next;

}

int main() {

}
