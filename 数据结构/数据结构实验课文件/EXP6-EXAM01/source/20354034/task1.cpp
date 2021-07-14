#include<stdio.h>
#include<stdlib.h>
struct node{
	char data;
	struct node *next;
};
node *head;

int main(){
	int m,n,s;//s为命令1或2 
	int front=0,rear=0;
	int a[101][2];
	char b;//b为出入队的字符 

	scanf("%d %d",&m,&n);
	head=(node*)malloc(sizeof(node));
	head->next=NULL;
	head->data=NULL;
	node *tail;
	node *p;
	tail=head;
	
	for(int i=0;i<m;i++){//构建循环列表 
		p=(node*)malloc(sizeof(node));
		p->data=NULL;
		p->next=NULL;
		if(i<m-1){
			tail->next=p;
			tail=p;
		}
		else{
			tail->next=p;
			p->next=head;
		}
	}
	
	p=head;//队尾 
	tail=head;//队头 
	
	for(int i=0;i<n;i++){//入队出队操作 
		scanf("%d",&s);
		if(s==1){
			getchar();
			scanf("%c",&b);
			p->data=b;
			p=p->next;
			rear++;
			if(rear==m) rear=0;
			if(front==m) front=0;
			a[i][0]=front;
			a[i][1]=rear;
		}
		if(s==2){
			tail->data=NULL;
			tail=tail->next;
			front++;
			if(front==m) front=0;
			if(rear==m) rear=0;
			a[i][0]=front;
			a[i][1]=rear;
		}
	}
	
	for(int i=0;i<n;i++){//输出front、rear 
		printf("%d %d",a[i][0],a[i][1]);
		printf("\n");
	}
	
	while(tail!=p){
		printf("%c",tail->data);
		tail=tail->next; 
		
	}
	return 0; 
} 
