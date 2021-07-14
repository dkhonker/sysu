#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	int m = 0;
	for (int i = 2; i <= n; i++) {
		for(int j = 1; j <=n; j++)
		{
			if(a[j]>a[m])
			{
			  dp[i]++;
			  m=j;
		    }
			
		} 
		m++;
		//add something here for computing dp[i] 
	}
	for(int i=1; i<=n;i++)
	{
		if(dp[1]<dp[i])
		{
			dp[1]=dp[i];
		}
	}
	return dp[1];
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
