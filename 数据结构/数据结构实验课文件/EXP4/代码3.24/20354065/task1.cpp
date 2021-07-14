#include <stdio.h>
#define N 20001
int main()
{
	char a[N],b[N],c[2*N];
	scanf("%s",a); scanf("%s",b);
	int i=0,j=0;
	while(a[i]!='\0')
	{
		c[i]=a[i];
		i++;
	}
	while(b[j]!='\0')
		c[i++]=b[j++];
	c[i]='\0';
	printf("%s",c);
	return 0;
}
