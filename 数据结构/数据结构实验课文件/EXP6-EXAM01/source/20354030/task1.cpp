#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m,n,front,rear,k=0,x;
	int j=0,i=0;
	scanf("%d %d",&m,&n);
	char a[m],b[m],c;
	front=0;
	rear=1;
	while (k<n)
	{
		scanf("%d %c",&x,&c);
		if(x==1)
		{
		    if(rear!=0)
			a[rear-1]=c;
			else
			a[m-1]=c;
			printf("%d %d\n",front,rear);
			rear++;
			if(rear==m)
			  rear=0;
		}
		if(x==2)
		{
			a[front]='\0';
			front++;
			if(front==m)
			  front=0;
			printf("%d %d\n",front,rear);
		}
		//printf("%d %d\n",front,rear);
		k++;
	}
	for(i=front;i==rear;i++,j++)
	{
		b[j]=a[i];
		if(i==m)
			  i=0;
	}
	printf("%s\n",b);
	return 0;
}

