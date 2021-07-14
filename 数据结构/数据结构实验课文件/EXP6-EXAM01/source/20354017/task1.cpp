#include<stdlib.h>
#include<stdio.h>


struct node{
	char str;
	struct node *next;
};
node*head;

int main()
{
	int m,n,s;
	scanf("%d%d",&m,&n);
	int front=0,rear=0;
	int a[101][2];
	char temp;
	
    head=(node*)malloc(sizeof(node));
	head->next=NULL;
	head->str=NULL;
	
	
	node*tail;
	node*p;
	tail=head;
	
	for(int i=0;i<m;i++)
	{
		p=(node*)malloc(sizeof(node));
		p->str=NULL;
		p->next=NULL;
		if(i<m-1)
		{
			tail->next=p;
			tail=p;
		}
		else
		{
			tail->next=p;
			p->next=head;
		}
	}
	p=head;
	tail=head;
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&s);
		if(s==1)
		{
			getchar();
			scanf("%c",&temp);
			p->str=temp;
			p=p->next;
			rear++;
			if(rear==m) rear=0;
			if(front==m) front=0;
			a[i][0]=front;
			a[i][1]=rear;
		}
		
		if(s==2){
			tail->str=NULL;
			tail=tail->next;
			front++;
			if(front==m) front=0;
			if(rear==m) rear=0;
			a[i][0]=front;
			a[i][1]=rear; 
		}
	}
	for(int i=0;i<n;i++){
		printf("%d %d",a[i][0],a[i][1]);
		printf("\n");
	} 
	while(tail!=p)
	{
		printf("%c",tail->str);
		tail=tail->next;
	 } 
			
	return 0;
}
