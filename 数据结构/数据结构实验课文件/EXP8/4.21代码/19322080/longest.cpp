#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	int t=2;
	for (int i = 2; i <= n; i++) {
		//add something here for computing dp[i] 
		dp[t]=1;
		for(int j=i-1;j>=1;j--){
			if(a[i]>a[j])
			dp[t]=dp[t]>dp[j]+1?dp[t]:dp[j]+1;
		}
		//printf("%d\n",dp[t]);
		t++;
	}
	
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
	int p=dp[1];
	for(int i=2;i<=n;i++){
		p=p>dp[i]?p:dp[i];
	}
	return p;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
