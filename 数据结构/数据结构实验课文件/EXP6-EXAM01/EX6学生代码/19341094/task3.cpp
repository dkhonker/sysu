#include <stdio.h>
#include <stdlib.h>

int m;  //命令数 

struct node{
	int data;
	struct node *next;
};
node *head; // head指向头节点 

void insert(int i, int x){//插入x到a[i] 
	node *p = head;
	while (i > 1){
		p = p->next; i--;
	} 
	node *q = (node*) malloc(sizeof(node));
	q->data = x;
	q->next = p->next;
	p->next = q; 
	//add something here
} 

void find(int x){//查找第一个x 
	node *p = head->next; 
	int j = 1;
	for(j;j>0;j++){
		if(p->data == x)
			break;
		else
			p = p->next;
	//add something here
		if (p == NULL) j = 0;
	}
	printf("%d\n", j);
}

void deleteByRange(int x, int y){ //去除[x,y]范围内的元素 
	node *p = head;
	node *q = head-> next;
	while (q != NULL){
		if (q->data >= x && q->data <= y){
			p->next = q->next;
			q = q->next;
			//add something here
		}
		else{
			p = p->next;
			q = q->next;
			//add something here
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
	node *s;
	return 0;
}

