#include<stdio.h>
int main(){
	int m,n,i=1;
	scanf("%d%d",m,n);
	char a[3],b[21];
	int front=0,rear=0;
	for(;i<=n;i++)
	{
		scanf("%s",a);
		if(a[0]==1&&rear<m)
		{
		 b[rear++]=a[2];
		 printf("%d %d\n",front,rear);
	    }
		else if(a[0]==1&&rear==m)
		{
		rear=0;
		b[rear]=a[2];
		printf("%d %d\n",front,rear);
	}
		if(a[0]==2)
		if(front<m)
		{
		b[front++]='\0';
		printf("%d %d\n",front,rear);
	}
		else if(front==m)
		{
		b[front]='\0';
		front=0;
		printf("%d %d\n",front,rear);
	    }
	}
	if(front<rear)
	{
		for(front;front<=rear;front++)
		printf("%c",b[front-1]);
	}
	
	
}
