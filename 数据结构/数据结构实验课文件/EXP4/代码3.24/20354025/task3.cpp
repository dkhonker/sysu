#include <stdio.h>
int main()
{
int a,b;
char c[20001];
char d[20001];
scanf("%d%d",&a,&b);
scanf("%s",c);
int n=0;
while(c[n]!='\0')n++;
int i=0;
for(i=0;i<b;i++)
if((a>=0&&a<=n)&&(b>=0&&b<=n+1-a))d[i]=c[i+a-1];
printf("%s",d);
}

