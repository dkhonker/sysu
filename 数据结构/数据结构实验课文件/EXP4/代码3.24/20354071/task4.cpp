#include<stdio.h>
int main()
{
	int i,m,n,command,c=0,front=0,rear=0;
	scanf("%d %d",&m,&n);
	char a[m];
	for(i=0;i<n;i++)
	{
		scanf("%d %c",&command,&a[i]);
		if(command==1)
		{
			rear++;
			printf("%d %d",front,rear);
		}
		if(command==2)
		{
			front++;
			c++;
			printf("%d %d",front,rear);
		}
	}
	printf("\n");
	while(c<i)
	{
		printf("%c",a[c]);
		c++;
	}
}
