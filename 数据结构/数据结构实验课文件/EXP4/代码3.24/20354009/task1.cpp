#include<stdio.h>
#include<string.h>
int main(){
	int i=0,j=0;
char a[20001],b[20001],c[40001];
gets(a);
gets(b);
while(a[i]!='\0')
{
	c[i]=a[i];
	i++;
}
while(b[j]!='\0')
{
	c[i]=b[j];
	i++;
	j++;
}
puts(c);
return 0;
}
