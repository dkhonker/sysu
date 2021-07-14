#include<stdio.h>
#include<string.h>
int main()
{
	char x,s[10001];
	int m,n,i,j;
	int front,rear;
	front = 0;
	rear = 0;
	scanf("%d%d",&m,&n);
	for(j = 0;j < n;j++)
	{
		scanf("%d",&i);
		switch(i)
		{
			case 1: getchar();
					scanf("%c",&x);
					s[rear++] = x;
					rear=rear%m;
					printf("%d %d\n",front,rear);
				    break;
			case 2: s[front++] = 0;
					front = front%m;
					printf("%d %d\n",front,rear);
					break;
		}
	}
	for(int k=0;k<m;k++)
	{
		if(s[k]!=0) printf("%c",s[k]);
	}
	return 0;
}
