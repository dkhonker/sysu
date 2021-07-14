#include <stdio.h> 
#include <string.h>
int main()
{
	char str1[20001],str2[20001];
	int x=-2;
	gets(str1);
	gets(str2);
		int len1,len2;
	len1=strlen(str1);
	len2=strlen(str2);
	int i;
	for(i=0;i<len1&&i<len2;i++)
	{
		if(str1[i]==str2[i])
		{
			continue;
		}
		else
		{
			if(str1[i]>str2[i])
			{
				x=1;
			}
			else x=-1;
		}
	}
	if(x==-2)
	{
		if(len1==len2)x=0;
		else if(len1>len2)x=1;
		else x=-1;
	}
	
	printf("%d\n",x);
	return 0;
}

