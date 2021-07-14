#include<stdio.h>
#include<string.h>
int main()
{
	int m,n;
	int op;
	char c[20]={"\0"};
	scanf("%d %d",&m,&n);
	int front=0;
	int rear=1;
	for(int i=1,char s;i<=100;i++)
	{
		scanf("%d %c",&op,&s);
		switch(op)
		{
			case 1:
				rear++;printf("%d %d",front,rear);
				if(rear>m-1)
				rear=c[0];
				a[rear]=s;
				 break;
			case 2:
				c[front]='\0'; front++; printf("%d %d",front rear);break;
		}
	}
	
	
} 

