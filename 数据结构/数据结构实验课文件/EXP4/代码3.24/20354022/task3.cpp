#include<stdio.h>
#include<cstring>

int pos,len;
char str[20001],s[20001];

int main()
	{
		scanf("%d",&pos);
		scanf("%d",&len);
		getchar();
		gets(str);
		
		for(int i=0;i<len;i++)
		{
			s[i]=str[pos-1];
			pos++;
		}
		printf("%s",s);
		return 0;
		
	}

