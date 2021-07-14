#include <stdio.h> 
#include <stdlib.h>
typedef struct number
{
	char ch;
	int num;
	struct number *next; 
}Number,*PNumber;

int main()
{
	int m,n;
	int len=sizeof(Number);
	scanf("%d%d",&m,&n);
	PNumber front,rear,p;
	int i=0;
	front=rear=(PNumber)malloc(len);
	front->num=0;
	for(i=1;i<m+1;i++)
	{
		p=(PNumber)malloc(len);
		p->num=i;
		rear->next=p;
		rear=p;
	}
	rear->next=front;
	rear=front;
	
	int temp;
	char input;
	int count=0;
	while(n--)
	{	
		scanf("%d",&temp);
		getchar();
		if(temp==1)
		{
			scanf("%c",&input); 
			rear->ch=input;
			rear=rear->next;
			count++;
		}
		else
		{
			front=front->next;
			count--;
		}
	}
	p=front;
	for(i=0;i<count;i++)
	{
		printf("%c",p->ch);
		p=p->next;
	}
	return 0;
}

