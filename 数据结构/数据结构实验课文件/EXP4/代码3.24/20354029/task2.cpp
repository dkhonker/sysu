#include<stdio.h>
int main()
{char str1[20001];
 char str2[20001];
 gets(str1);
 gets(str2);
 int i=0;
for(int i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
 {if(str1[i]>str2[i]) {printf("1");return 0;}
  if(str1[i]<str2[i]) {printf("-1");return 0;}
 }
 printf("0");
return 0;
}
