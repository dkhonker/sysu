#include<stdio.h>
int main()
{
	int front=0,rear=0,m,n,input,i;
	char a[101],data;
	scanf("%d %d",&m,&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			getchar();
			scanf("%c",&data);
			a[rear%m]=data;
			rear=(rear+1)%m;
			printf("%d %d\n",front,rear);
			break;
			case 2:front=(front+1)%m;
				printf("%d %d\n",front,rear);
				break;
		}
	}
	while(front!=rear)
	{
		printf("%c",a[front]);
		front=(front+1)%m;
	}
	return 0;
 } 
