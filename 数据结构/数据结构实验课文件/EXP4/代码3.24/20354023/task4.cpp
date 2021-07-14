#include<stdio.h>

int main(){
	int MAX=20000;
	char que[MAX];
	int front=0, rear=0;	
	int m, n;
	int i=0;
	int mode;
	char data;
	
	scanf("%d",&m);
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&mode);
		if(mode==1)
		{
			scanf("%c",&data);
			que[rear]=data;
			printf("%c",que[rear]);
			
			rear=(rear+1)%(m);
			printf("%d %d",front,rear);
		}
			
		if(mode==2)
		{
			front=(front+1)%(m);
			printf("%d %d",front,rear);
		}
		
		int frontt=front;
		
		for(;;)
		{
			printf("%c",que[frontt]);
			frontt=(frontt+1)%(m);
			
			if(frontt==rear)
				break;
		}
	}
}


























