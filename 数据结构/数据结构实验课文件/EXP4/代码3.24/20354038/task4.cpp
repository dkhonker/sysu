#include<stdio.h>
#include<string.h>
const int maxsize = 20000;
char s[maxsize];

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int x;
	int front=0,rear=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d ",&x);
		switch(x)
		{
			case 1:
				{
					scanf("%c",&s[rear]);
				    rear++;
				    if(rear == m)rear = 0;
				    printf("%d %d\n",front,rear);
				    break;
				}
			case 2:
				{
					s[front] = '\0';
					front++;
					if(front == m)front = 0;
					printf("%d %d\n",front,rear);
					break;
			    }
		}
	}
	for(int i = 0;i<m;i++)
	{
		if(s[i] == '\0')
		{
			continue;
		}
		else
		{
			printf("%c",s[i]);
		}
	}
	return 0;
}
