#include <stdio.h>
#include <malloc.h>
int main()
{
	char a[20001],b[20001],c[400001];
	int n,m,j=0,i=0;
	scanf("%s",a);scanf("%s",b);
    while(a[i]!='\0')
    {	i++;	n=i;}  
	  while(b[j]!='\0')
    {	j++;	m=j;}
	i=0;j=0;
	while(i<=n-1 )
	{
		c[i]=a[i];	i++;  
	}
	while( j<=m-1)
	{
       c[j+n]=b[j]; j++; 
	}
	printf("%s",c);
	return 0;
}
