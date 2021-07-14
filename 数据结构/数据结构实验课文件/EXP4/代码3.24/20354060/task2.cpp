#include <stdio.h>
#include <stdlib.h>

int maxn=20001; 

int main() {
	char a[maxn];
	char b[maxn];
	gets(a);
	gets(b);
	int i=0;
	while(a[i]!='\0'&&b[i]!='\0')
	{
	   if (a[i]!=b[i])
	    {
	    	if(a[i]>b[i]) printf("1");
	    	else  printf("-1");
	    	return 0;
		}
		if (a[i+1]=='\0'&&b[i+1]=='\0') printf("0");
		i++;
}
return 0;
}
