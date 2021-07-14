#include<stdio.h>
int m, n;
char a[21] = {'\0'};
char b;
int front = 0, rear = 0;
void input(char x);
void pop();
int main()
{
	scanf("%d%d",&m,&n);
	int flag;
	for(int i = 0;i< n;i++)
	    {
		 scanf("%d",&flag);
		 if(flag == 1)
		{
			getchar();
		  scanf("%c",&b);
		 input(b);
	}
		 else if(flag == 2)
		 pop();
	}
	for(;front != rear;front = (front + 1) % m)
	printf("%c",a[front]);
}
void input(char x)
{
	a[rear] = x;
	rear = (rear + 1) % m;
	printf("%d %d\n",front,rear);
}
void pop()
{
	front = (front + 1) % m;
	printf("%d %d\n",front,rear);
}
