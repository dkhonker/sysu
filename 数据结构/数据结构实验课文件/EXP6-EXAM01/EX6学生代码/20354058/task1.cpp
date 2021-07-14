#include <stdio.h>
int m;
int n;

int main{
scanf("%d",&m);
scanf("%d",&n);
getchar();
int x;
char c;
int i;
 for(i=0;i<n;i++) {
 scanf("%d",&x);
	if(x==1){scanf("%c",&c);inqueue();}
	else if(x==2){outqueue();}
	else {print("wrong!");}
 }
	
 return 0;
}

void inqueue()
{
	int front=0;
	int rear=0;
	rear++;
	if((rear+1)%m==front){ printf("the queue is full!");}
	printf("%d %d",front,rear);
	
}

void outqueue()
{ 
int front =0;
int rear=n;
rear--;
if(rear==front){printf("bad");}
}



