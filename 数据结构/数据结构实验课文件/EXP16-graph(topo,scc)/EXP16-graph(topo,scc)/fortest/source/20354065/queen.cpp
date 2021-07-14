#include<stdio.h>
#define max 11
int n,T=0; 
int queen[max]={0};

int check(int c)
{
	for(int j=1;j<c;j++)
	{
		if((queen[j]==queen[c])||(queen[j]-queen[c]==c-j)||(queen[c]-queen[j]==c-j))
			return 0; 
	}
	return 1;
}

void put(int c)
{
	if(c>n) 
	{
		T=T+1;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		queen[c]=i;
		if(check(c))
			put(c+1);	
	}
}

int main()
{
	scanf("%d",&n);
	put(1);
	t=T%10000;
	printf("%d",T%10000);
	return 0;
}
