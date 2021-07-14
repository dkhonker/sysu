#include <stdio.h>
#include <stdlib.h>

int m;  //命令数 

struct node{
	int data;
	struct node *next;
};
node *head; // head指向头节点 

void insert(int i, int x){//插入x到a[i] 
	node *p = head;int j=0;
while(p&&j<i-1){
	p=p->next;++j
}
s=(node*) malloc(sizeof(node));
s->data=x;s->next=p->next;
p->next=s;
} 

void deleteByIndex(int i){ //删除a[i] 
	node *p = head,*q;int j=0;
	while(p->next&&j<i-1){
		p=p->next;++j;
	}
	if(!(p->next)||j>i-1)return 0;
	q = p->next;p->next=q->next;
} 

void find(int x){//查找第一个x 
node *p = head->next;int j=1,e;
while(p->data!=x){
	p=p->next;++j;
}
if(!p||j>1)printf("error");
else printf("%d",p->data);
}

void eliminateRepeat(){ //去除重复元素 
node *r = head->next, *p, *q;
	while (r != NULL){
		p = r; q = r->next;
		while (q != NULL){
			if (q->data == r->data){
				p->next = q->next; free(q);	q = p->next;
			}
			else {p = q; q = p->next;}
		}
		r = r->next;
	}
}

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

