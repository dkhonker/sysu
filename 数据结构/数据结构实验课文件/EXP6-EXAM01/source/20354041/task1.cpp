#include<stdio.h>
#include<stdlib.h>

int front = 0, rear = 0;

typedef struct LNode {
	int index;
	char data;
	LNode *next;
}LNode, *LinkList;

LinkList IntiList(int);
void pushList(LinkList, char);
void popList(LinkList);
void showList(LinkList);

LinkList IntiList(int m) {
	LinkList head, tail, p;
	head = tail = (LinkList)malloc(sizeof(LNode));
	head->index = 0;
	for (int i = 1; i < m; i++) {
		p = (LinkList)malloc(sizeof(LNode));
		p->index = i;
		tail->next = p;
		tail = p;
	}
	tail->next = head;
	return head;
}

void pushList(LinkList head, char data) {
	while (head->index != rear) { head=head->next; }
	head->data = data;
	rear++;
	printf("%d %d",front,rear);
}

void popList(LinkList head) {
	while (head->index != front) { head=head->next; }
	head->data = NULL;
	front++;
}

void showList(LinkList head) {
	LinkList p = head;
	while (p->index != front) { p->next; }
	LinkList Head = p;
	while (Head->index != rear - 1) {
		if(Head->data!=NULL) printf("%c", Head->data);
		Head = Head->next;
	}
}

int main() {
	int m, n;
	char button[3];
	scanf("%d %d", &m, &n);
	LinkList Head = IntiList(m);
	for (int i = 1; i <= n; i++) {
		scanf("%s", button);
		switch (button[0])
		{
		case '1': pushList(Head, button[2]); break;
		case'2':popList(Head); break;
		}
	}
	showList(Head);

	return 0;
}
