#include<stdio.h>
#include<string.h>
int strcompare(char a[20001],char b[20001])
{
	int i=0;
while(a[i]!='\0'&&b[i]!='\0')
{
if(a[i]-b[i]>0)
printf("1");
if(a[i]-b[i]<0)
printf("-1");
else
printf("0");
i++;
}
}
int main(){	
char a[20001],b[20001];
gets(a);
gets(b);
strcompare(a,b);
}

