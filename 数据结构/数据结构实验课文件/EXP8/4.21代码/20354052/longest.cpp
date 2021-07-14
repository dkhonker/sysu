#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum()
{
	dp[1] = 1;
	for (int i = 2; i <= n; i++) 
	{
		int dp_max=1;
		for(int j=i;j>1;j--)
		{
			if(a[i-j]<a[i-1])
			{
				if(dp[i-j+1]>dp_max)
				{
					dp_max=dp[i-j+1];
				}
			}
		}
		if(i!=2)
		{
		dp[i]=dp_max+1; 
		}
	}
	int dpmax=1;
	for (int i=1;i<=n;i++)
	{
		if(dp[i]>dpmax)
		{
			dpmax=dp[i];
		}
		printf("%d ",dp[i]);
	}
	return dpmax;
}
	//add something here for computing dp[i] 
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
