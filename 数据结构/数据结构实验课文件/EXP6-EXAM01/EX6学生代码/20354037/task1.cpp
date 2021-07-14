/* 人生若只如初见，何事秋风悲画扇。 2021.04.07*/
#include<stdio.h>
#include<string.h>
int main()
{
	int m,n,head = 0,end = 0;
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
			arr[end] = a2;
			end++;
			if(end > m - 1)
			{
				end = 0;
			}
		}
		else
		{
			head ++;
			if(head > m - 1)
			{
				head = 0;
			}
		}
		printf("%d %d\n",head,end);
	}
	while(head != end)
	{
		printf("%c",arr[head]);
		head++;
		if(head > m - 1) head = 0;
	}
	return 0;
}
