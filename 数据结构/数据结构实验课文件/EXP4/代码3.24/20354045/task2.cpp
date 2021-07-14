#include<stdio.h>
#include<string.h>
int N = 20001;
int main()
{
	char a[N],b[N];
	gets(a);
	gets(b);
	if(strcmp(a,b)>0)
	 {
	   printf("1");
     }
    else if(strcmp(a,b)==0)
    {
    	printf("0");
	}
	else  printf("-1");
	
	return 0;
}
