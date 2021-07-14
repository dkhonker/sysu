#include <stdio.h>
#include <stdlib.h>

int m;  //命令数 

struct node{
	int data;
	struct node *next;
};
node *head; // head指向头节点 

void insert(int i, int x){//插入x到a[i-1] 
	node *p=head,*q;
	for(int j=1;j<i;j++)
		p=p->next;
	q=(node*)malloc(sizeof(node));
	q->data=x;
	q->next=p->next;
	p->next=q;
} 

void deleteByIndex(int i){ //删除a[i-1] 
	node *p=head;
	for(int j=1;j<i;j++)
		p=p->next;
	p->next=p->next->next;
} 

void find(int x){//查找第一个x 
	int count=0;
	int getnumber=0;
	for(node *p=head;head->next!=NULL;p++){
		count++;
		if(p->data==x){
			printf("%d",count);
			getnumber=1;
			break;
		}
	}
	if(getnumber==0)
		printf("0");
}

void eliminateRepeat(){ //去除重复元素 
	int count1=0,count2=0;
	for(node *p=head;p->next!=NULL;p++){
		count1++;
		count2=count1;
		for(node *q=p->next;q->next!=NULL;q){
			count2++;
			if(q->data==p->data)
				deleteByIndex(count2);
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
		int count=0;
		for(node *p=head;p->next!=NULL;p++){
			count++;
			printf("a%d=%d ",count,head->next);
		}
		printf("\n");
	}
	return 0;
}

