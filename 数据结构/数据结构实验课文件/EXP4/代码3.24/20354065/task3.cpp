#include <stdio.h>
#define N 20001
int main()
{
	int pos,len,i,j=0;
	char a[N],b[N];
	scanf("%d %d",&pos,&len);
	scanf("%s",a);
	for(i=pos-1;i<pos+len-1;i++,j++) b[j]=a[i];
	printf("%s",b);
	return 0;
}
