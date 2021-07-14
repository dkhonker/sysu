#include<stdio.h>
#include<stdlib.h>
struct node{
	char data;
	struct node *next;
};
node *head;

int main(){
	int n,m,k;
	int rear=0,front=0;
	/*node *rear;
	node *front;*/
	char d;
	node *p,*tail,*t;
	head=(node*)malloc(sizeof(node));
	head->next=NULL;
	tail=head;
	/*rear=(node*)malloc(sizeof(node));
	rear->data=0;
	rear->next=head;
	front=(node*)malloc(sizeof(node));
	front->data=0;
	front->next=head;*/
	scanf("%d %d",&m,&n);
	for(int i=0;i<n;i++){
		scanf("%d",&k);
		scanf("%c",&d);
		if(k==1){
			rear++;
			tail->data=d;
			p=(node*)malloc(sizeof(node));
			p->next=NULL;
			tail->next=p;
			tail=p;
			printf("%d ",front);
			printf("%d ",rear);
		}
		if(k==2){
			t=head->next;
			free(head);
			head=t;
			front++;
			printf("%d ",front);
			printf("%d ",rear);
		}
	}
	return 0;
}
