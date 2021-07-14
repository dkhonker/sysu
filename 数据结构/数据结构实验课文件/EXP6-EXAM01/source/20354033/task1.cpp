#include<stdio.h>
int main()
{
	int p,i;
	int front=0,rear=0;
	char x;
	char a[21];
	int b[101],c[101];
	int m,n;
	scanf("%d %d",&m,&n);
    for(i=0;i<n;i++)
	{
	
	
	scanf("%d",&p);
	getchar();
	if(p==1)
	{   scanf("%c",&x);
	    a[rear]=x;
		rear=(rear+1)%m;
		
		
		
	}
	else if(p==2)
	{
		front=(front+1)%m;
	}
	b[i]=front;
	c[i]=rear;
	
	
	
	
	}
	
	for(i=0;i<=m;i++)
	{
		printf("%d %d\n",b[i],c[i]);	}
	for(i=front;i<m;i++)
	printf("%c",a[i]);
	return 0;
 } 
