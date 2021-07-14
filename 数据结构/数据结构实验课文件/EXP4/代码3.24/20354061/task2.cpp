#include <stdio.h>
int main()
{
	char str1[20000];
	char str2[20000];
	int i=0,j=0,k=0,m=0;
	gets(str1);
	gets(str2);
	while(str1[i]!='\0')
	{
		i++;
		k++;
	}
	while(str2[j]!='\0')
	{
		j++;
		m++;
	}
	if(m==k)
	{
	for(i=0;i<k&&i<m;i++)
	{
		if(str1[i]-str2[i]<0)
			{
				printf("-1");
				return 0;
			}
		if(str1[i]-str2[i]>0)
			{
				printf("1");
				return 0;
			}
	}
    }
	if(m>k)
		{
			printf("-1");
			return 0;
		}
	if(m<k)
		{
			printf("1");
			return 0;
		}
	else
	{
		printf("0");
		return 0;
	}
}
