#include<stdio.h>
int main()
{
	char a[20000],b[20000];
	gets(a);
	gets(b);
	int i=0,flag=0;
while(a[i]!='\0'&&b[i]!='0')
{
	if(a[i]==b[i])
	i++;
	else if(a[i]>b[i])
	{
	flag=1;
	break;}
	else 
	{
	flag=-1;
	break;}
}
printf("%d",flag);
return 0;
} 
