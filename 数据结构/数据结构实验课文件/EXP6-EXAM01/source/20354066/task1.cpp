#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	char arr[20];
	getchar();
	int front=0;
	int rear=0;
	while(n--)
	{
		int c;
		scanf("%d",&c);
		getchar();
		switch(c)
		{
			case 1:char d;d=getchar();getchar();arr[rear]=d;rear=(rear+1)%m;break;
			case 2:front=(front+1)%m;break;
		}
	}
	for(int i=front;i!=rear;i=(i+1)%m)
	printf("%c",arr[i]);
	return 0;
 } 
