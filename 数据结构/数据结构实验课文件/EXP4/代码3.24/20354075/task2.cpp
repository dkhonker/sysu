#include<stdio.h>
int main()
{
	char a[20000],b[20000];
	gets(a);
	printf("\n");
	gets(b);
	int i=0,j=0,k;
	k=a[i]-b[j];
	if(k=0)
	    printf("0");
	if(k>0) 
	    printf("1");
	if(k<0)
	    printf("-1");
    return 0;f
}
