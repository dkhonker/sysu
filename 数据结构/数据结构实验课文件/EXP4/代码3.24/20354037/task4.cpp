#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
	int m,n,flont = 0,rear = 0;
	scanf("%d%d\n",&m,&n);
	char arr[m];
	for(int i = 1;i <= n;i++)
	{
		int a1 ;
		scanf("%d",&a1);
		if(a1 == 1)
		{
			scanf(" ");
			char a2;
			a2 = getchar();
			arr[rear] = a2;
			rear++;
			if(rear > m - 1)
			{
				rear = 0;
			}
			
		}
		else
		{
			flont ++;
			if(flont > m - 1)
			{
				flont = 0;
			}
		}
		printf("%d %d\n",flont,rear);
	}
	
	
	while(flont != rear)
	{
		printf("%c",arr[flont]);
		flont++;
		if(flont > m - 1) flont = 0;
	}

	return 0;
}
