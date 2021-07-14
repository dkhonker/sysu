#include<stdio.h>
int main()
{
	char a[20001],b[20001];
	gets(a);gets(b);
	int i=0,j=0,n;
	for(;a[i]!='\0'&&b[i]!='\0';i++)
	{
	    if(a[i]!=b[i])
	    {j=a[i]-b[i];
	    break;
		}
    }
    if (a[i]!=b[i])
    j=a[i]-b[i];
    if(j<0)
    n=-1;
    else if(j>0)
    n=1;
    else
    n=0;
    printf("%d\n",n);
    return 0;
       
}
