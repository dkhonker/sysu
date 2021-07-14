#include<stdio.h>
int m;
int n;
int flag;
int front = 0;
int rear = 0;
char a[21];
void task1(char b);
void task2(); 
int main()
{
	char b;
	scanf("%d%d",&m,&n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",flag);
		if(flag == 1)
		{
		scanf("%c",&b)
		task1(b);
	    }
  	    else if(flag == 2)
	    task2;
	}
}
void task1(char b)
{
	a[rear] = b;
	rear = (rear+1)
}
