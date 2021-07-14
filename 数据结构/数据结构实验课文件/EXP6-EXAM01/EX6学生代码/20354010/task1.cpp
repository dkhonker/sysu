#include <stdio.h>
#include <stdlib.h>


int main() {
	int a;
	int b;
	scanf("%d %d", &a,&b); getchar();	
	char c[a];
	int i=0;
	int front=0;
	int rear=0;
	int d;
	char f;
	for (i=0;i<b;i++)
	{
		scanf("%d",&d);
		if (d==1)
		{
			getchar();
			scanf("%c",&f);
			c[rear]=f;
		getchar();
			rear=rear%a+1;
		}
		if (d==2)
		{
			front=front%a+1;
		}
		
		if (rear==front){
			front=front%a+1;
		}
    
	}
	for (i=0;i<a;i++)
	{
	f=c[front];
		printf("%c",f);
		front=front%a+1;
		f=c[front];
		if (front==rear){
			printf("%c",f);
			break;
		}
	}
	return 0;
}
