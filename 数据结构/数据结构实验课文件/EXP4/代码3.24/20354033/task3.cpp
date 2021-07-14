#include<stdio.h>
int main()
{ int m,n,j=0,i=0;
scanf("%d%d",&m,&n);
char s[20000];
char a[20000];
getchar();
gets(s);
for(i=m-1;i<m+n-1;i++)
{
a[j]=s[i];
j++;}
puts(a);
return 0;
}

