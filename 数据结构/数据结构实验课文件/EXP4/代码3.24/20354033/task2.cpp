#include<stdio.h>
#include<string.h>
int main()
{
char a[20001],b[20001];
gets(a);
gets(b);
int i=0,j=0;
for(i=0;i<20000;i++)
{
if(a[i]==b[i])
j=0;
else if(a[i]>b[i])
j=1;
else 
{
j=-1;}
printf("%d",j);
return 0;

}
}
