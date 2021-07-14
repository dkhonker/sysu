#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, n;
	int front = 0, rear = 0;
	int line[100];
	int mode = 0;
	
	scanf("%d",&m);
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &mode);
		getchar();
		if(mode == 1)
		{
			scanf("%c", &line[rear]);
			rear = (rear+1)%m;
			printf("%d ",front);
			printf("%d\n",rear);
		}
		
		else if(mode == 2)
		{
			front = (front+1)%m;
			printf("%d ",front);
			printf("%d\n",rear);
		}
	}
	
	while(front != rear)
	{
		printf("%c", line[front]);
		front = (front+1)%m;
	}
	
	return 0;
}



