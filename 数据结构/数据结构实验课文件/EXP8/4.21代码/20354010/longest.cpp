#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		int t=0;
		for (int j=1;j<i;j++)
		{
			if (a[j]<a[i]){
			if (dp[j]>t) t=dp[j];
			}
		}
		dp[i]=t+1;
		//add something here for computing dp[i] 
	}
	int max=0 ;
	for (int i=1;i<=n;i++)
	{
		if (dp[i]>max)
		max=dp[i];
	}
	return max;
	
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
