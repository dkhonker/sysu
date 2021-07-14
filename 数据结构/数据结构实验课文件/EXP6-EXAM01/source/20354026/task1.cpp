#include <stdio.h> 
main()
{
	int m,n;
	int front=0;
	int rear=0;
	scanf("%d%d",&m,&n);
	getchar();
	char b[m];
	for(int i=0;i<n;i++)
	{
		char a[5];
		gets(a);
		if(a[0]=='1')
		{
			b[rear]=a[2];
			rear=(rear+1)%m;
		}
		else
		{
			front=(front+1)%m;
		}
		printf("%d %d\n",front,rear);
	}
	while(front!=rear)
	{
		printf("%c",b[front]);
		front=(front+1)%m;
	}
	return 0;
}
