#include<stdio.h>
#include<string.h>
int main()
{
char a[20001],b[20001],c[40001];
int i=0,j=0;
gets(a);
gets(b);


while(a[i]!='\0')
{
c[i]=a[i];
i++;}
puts(c);

while(b[j]!='\0')
{
c[i++]=b[j++];}
puts(c);

}

