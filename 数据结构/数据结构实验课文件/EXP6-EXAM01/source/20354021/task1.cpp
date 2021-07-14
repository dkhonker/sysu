#include <stdio.h>
#include <stdlib.h>
struct node
{
	char chars;
	struct node *next;
	int num;	
};
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	getchar();
	int temp,chara;
	int count=0;
	struct node *head,*p1,*p2;
	int len=sizeof(struct node);
	head=p1=(struct node *)malloc(len);
	int i;
	i=0;
	while(i<m)
	{
		p1->num=i;
		p2=(struct node *)malloc(len);
		p1->next=p2;
		p1=p2;
		i++;
	}
	p1->next=head;	
	p1=head;
	while(i--)
	{
		scanf("%d",&temp);
		getchar();
		if(temp==1)
		{
			scanf("%c",&chara);
			getchar();
			if(count<m)
			{
				count++;
				p1->chars=chara;
				p1=p1->next;
			}
			printf("%d %d\n",head->num,p1->num);
		}
		else
		{
			head=head->next;
			p1=p1->next;
			count--;
			printf("%d %d\n",head->num,p1->num);
		}	
	}
	for(i=0;i<count;i++)
	{
		printf("%c",head->chars);
		head=head->next;
	}
	return 0;
}
