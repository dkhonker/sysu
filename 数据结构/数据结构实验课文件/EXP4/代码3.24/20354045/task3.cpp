#include<stdio.h>
#include<string.h>
int N = 20001;
int main()
{
	int m,n;
	char s[N],a[N];
	printf("please enter two numbers:\n");
	scanf("%d%d\n",&m,&n);
	gets(s);
	for(int i=0;i<n;i++,m++) 
	{
		a[i]=s[m-1];
	}
	puts(a);
	return 0;
}
