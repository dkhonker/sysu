#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	
	dp[1] = 1;
	int max = dp[1];
	for (int i = 2; i <= n; i++) {
		//add something here for computing dp[i]
		dp[i] = 1;
		for(int j = 2;j<i;j++)
		{
			if(a[i]>a[j]){
			
				if(dp[i]>dp[j]+1) dp[i] = dp[i];
				else dp[i] = dp[j]+1;
			}	
		} 
	}
	
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
	
	for(int i = 1;i<=n;i++)
	{
		if(max<dp[i]) max = dp[i];
		
	}
	
	//for(int i = 1;i<=n;i++) printf("%d ",dp[i]);
	return max;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
