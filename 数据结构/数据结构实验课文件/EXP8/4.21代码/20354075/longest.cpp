#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	for (int i = 2; i <= n; i++) 
	{
		if(dp[i]>dp[i-1])
		dp[i]=dp[i-1]+1;
	
	
		//add something here for computing dp[i] 
	}
	int t;
	for(i=1;i<n;i++)
	  for(int j=2;j++)
	  {
	  	if(dp[i]<dp[j])
	  	dp[i]=t;t=dp[j];dp[j]=t;
	  }
	printf("the number of the longest rasing string:%d",dp[1]);
		
	
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
