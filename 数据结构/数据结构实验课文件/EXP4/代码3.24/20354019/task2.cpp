#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20001];
    char str2[20001];
    gets(str1);
    gets(str2);
    int n;
    if(strlen(str1)>strlen(str2))
    n=strlen(str2);
    else
    n=strlen(str1);
    int i;
    for(i=0;i<n;i++)
    {
	 if(str1[i]>str2[i])
	 {
	 printf("1");break;}
	 else if(str1[i]<str2[i])
	 {
	 printf("-1");break;}
	 else if(str1[i]==str2[i])
	 continue;
	}
		if(i==strlen(str1)&&i==strlen(str2))
	printf("0");
    else if(i==strlen(str1))
    printf("-1");
    else if(i==strlen(str2))
    printf("1");

    
 } 
