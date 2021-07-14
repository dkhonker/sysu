#include<stdio.h>
int main()
{
	char a[20001],b[20001];
	int i=0,j=0,k=0;
	int x=0;
	gets(a);
	gets(b);
	while(a[k]!='\0'){
		k++;
	    i++;
	}
	k=0;
	while(b[k]!='\0'){
		k++;
	    j++;
	}
	if(i>j)
	{
		x=1;
	}
	else if(i<j)
	{
		x=-1;
	}
	printf("%d",x);
	return 0;
}
