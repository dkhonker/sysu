#include<stdio.h>
#include<string.h>
int main()
{	int m,n,x,flag,i,front=0,rear=0;
	scanf("%d%d",&m,&n);
	char a[10000];
	for(i=0;i<n;i++,flag=0)
	{
	scanf("%d",&flag);
	if(flag==1)
	{	getchar();
		scanf("%c",&a[rear++]);
		printf("%d %d\n",front,rear);
		continue;
}
	else if(flag==2)
	{	a[front++]='\0';
	if(rear<m)
		printf("%d %d\n",front,rear);
		else{
		rear=0;
		printf("%d %d",front,rear);
	}
		continue;
	}
}
	for(i=0;i<m;i++)
	printf("%c",a);
	return 0;
 } 
