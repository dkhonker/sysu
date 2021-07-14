#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {//add something here for computing dp[i] 
	    int k = 0; 
		for(int j = 1; j < n; j++) {
		    if(a[i]>a[j])
		        if(dp[j]>=k)
		           k = dp[j];
		}
		if(k == 0)
		   dp[i] = 1;
		else 
		    dp[i] = k + 1;
	}
	
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
	int max = dp[1];
	for (int i = 2; i<=n;i++)
	    if(dp[i]>max)
	        max =dp[i];
	return max;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
