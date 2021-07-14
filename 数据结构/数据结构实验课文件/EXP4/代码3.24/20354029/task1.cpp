#include<stdio.h>
#include<string.h>
int main()
{
char str1[10001];
char str2[10001];
char str3[20001];
gets(str1);
gets(str2);
int i=0,j=0;
while(str1[i]!='\0')
{str3[i]=str1[i];
 i++;
}
while(str2[j]!='\0')
str3[i++]=str2[j++];
str3[i]='\0';
puts(str3);
return 0;
}
