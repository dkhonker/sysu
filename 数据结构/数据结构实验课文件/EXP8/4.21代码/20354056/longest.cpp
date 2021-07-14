#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	dp[0]=1;
	for (int i = 2; i <= n; i++) {
		for(int j=1;j<n;j++) {
		    if (a[i] >= a[j]&&(dp[i]<=dp[j]||dp[i]==NULL)){
		        dp[i] = dp[j]+1;
		    } 
	    }
	    printf("%d:%d  \n",i,dp[i]);
	}
	dp[0] = dp[1];
	for (int i = 2; i <= n; i++) {
		if (dp[i] > dp[0])dp[0] = dp[i];
		//add something here for computing dp[i] 
	}
	return(dp[0]);
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
