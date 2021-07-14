#include <stdio.h>
#include <stdlib.h>

int m;  //命令数 

struct node{
	int data;
	struct node *next;
};
node *head; // head指向头节点 

void insert(int i, int x){//插入x到a[i-1] 
	int j=0;
	node *p = head,*q;
	while(p!=NULL&&j<i-1){
		p=p->next; j++;
	}
	if(j!=i-1) printf("It`s wrong！\n");
	else {
		q=head;
		q->data=x;
		q->next=p->next; 
		p->next=q;
	} 
	
} 

void deleteByIndex(int i){ //删除a[i-1] 
	int j=1;
	node *p = head;
	node *q = head-> next;
	while(p->next!=NULL&&j<i-1){
		p=q;q=q->next;j++;
	}
	if(j!=i) printf("It`s wrong！\n");
	else {
		p->next=q->next; free(q);
	} 
} 

void find(int x){//查找第一个x 
	node *p = head->next; 
	while(p!=NULL&&p->data!=x) p=p->next;
	if(p==NULL) printf("0\n");
	else printf("0\n");
}

void eliminateRepeat(){ //去除重复元素 
	node *s = head->next,*p,*q;
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

