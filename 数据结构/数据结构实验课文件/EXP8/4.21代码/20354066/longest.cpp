#include<stdio.h>
int n;
int main()
{
	scanf("%d",&n);
	long long a[n];
	int dp[n];
	for(int i=0;i<n;i++)
	scanf("%lld",&a[i]);
	dp[0]=1;
	for(int i=1;i<n;i++)
	{
	int max=1;
	int m=0;
	for(int j=i-1;j>=0;j--)
	{
	if(a[i]>a[j]&&dp[j]>=max)
	{
	max=dp[j];
	m=1;
    }
    }
    dp[i]=(m==1?max+1:1);
    }
    int max=1;
    for(int i=0;i<n;i++)
    if(dp[i]>max)
    max=dp[i];
	printf("%d\n",max);
	return 0;
 } 
