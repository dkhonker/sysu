#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(int a[],int n){
	dp[1] = 1;
	for (int i=1;i<=n;i++) dp[i]=dp[1];
	for (int i = 2; i <= n; i++) {
		//add something here for computing dp[i] 
		for (int j=1;j<i;j++)
		{
			if (a[j]<a[i]&&dp[i]<dp[j]+1)
			{
				dp[i]=dp[j]+1;//找到j前面最大的dp并加1 
			} 
		}
	}
	
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
	int max=dp[1];
	for(int i=1;i<=n;i++)
	{
		if(max<dp[i])max=dp[i];
	 } 
	 return max;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum(a,n));
	return 0;
}
