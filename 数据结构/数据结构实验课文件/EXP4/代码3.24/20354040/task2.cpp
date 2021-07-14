#include<stdio.h>
int main()
{
	char str1[20001],str2[20001];
	int flag=0,i=0;
	gets(str1);
	gets(str2);
	for(i=0;i<20001;i++)
	{
		if(str1[i]=='\0'&&str2[i]!='\0')
		{
			flag=-1;
			break;
		}
		else if(str1[i]!='\0'&&str2[i]=='\0')
		{
			flag=1;
			break;
		}
		else if(str1[i]>str2[i])
		{
			flag=1;
			break;
		}
		else if(str1[i]<str2[i])
		{
			flag=-1;
			break;
		}
	}
	printf("%d",flag);
}
