#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[0]=1;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		//add something here for computing dp[i] 
	if(a[i]>a[i-1])
	{
		dp[i] = dp[i-1] + 1;
	}
	else
	{
		int dp_last_max=0;
		for(int j=1;j<i;j++)
		{
			if(a[j]<a[i]&&dp[j]>dp_last_max)
			dp_last_max = dp[j];
		}
		dp[i] = dp_last_max + 1;
	}
	}
	//for(int i=1;i<=n;i++) printf("%d\n",dp[i]);
	for(int i=1;i<=n;i++)
	{
		if(dp[i+1]>dp[i]) 
		dp[0] = dp[i+1];
	} 
	return dp[0];
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	int longestNum(); 
	int length_of_LIS();
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
