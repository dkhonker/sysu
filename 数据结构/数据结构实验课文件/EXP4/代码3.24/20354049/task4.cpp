#include<stdio.h>
#include<string.h>

int main()
{
	char x,s[20001];	
	int i,n,m;
	int* front,rear; 
	front = s[0];
	rear = s[0];
	scanf("%d%d",&m,&n);
	for(int j = 0;j < n;j++)
	{
		switch(i)
		{
		case 1: {scanf("%c",&x);*rear = x;printf("%d %d\n",front,rear);rear++;}break;
		case 2: {*front = '\0';printf("%d %d\n",front,rear);front++;}break;
		}
	}
	puts(s);
	return 0;
} 
