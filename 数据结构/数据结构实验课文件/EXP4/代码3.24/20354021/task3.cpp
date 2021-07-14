#include <stdio.h> 
#include <string.h>
int main()
{
	char str1[20001],str2[20001];
	int len1;
	len1=strlen(str1);
	int pos,len;
	scanf("%d%d",&pos,&len);
	getchar();
	gets(str1);
	int i,n;
	for(i=pos-1,n=0;i<len1,n<len;i++,n++)
	{
		str2[n]=str1[i];
	}
	str2[n]='\0';
	printf("%s\n",str2);
	return 0;
}
	
