#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,num=0;
	scanf("%d",&a);
	scanf("%d",&b);
	int x[21];
	char y[21];
	for(int i=0;i<21;i++)
	{
		x[i]=0;
	}
	int front=0,rear=0;
	int chaozuo=0;
	char shuru=0;
	for(int i=0;i<b;i++)
	{
		scanf("%d",&chaozuo);
		getchar();
		if(chaozuo==1)
		{
			scanf("%c",&y[rear]),num++,rear++;
			if(rear>=a)rear=rear-a;
		}
		if(chaozuo==2)
		{
			y[front]=0,front++;
			if(front>=a)front=front-a;
			num--;
		}
		printf("%d %d\n",front,rear);
	}
	for(int i=0;i<num;i++)
	{
		printf("%c",y[front+i]);
	}
	return 0;
}
