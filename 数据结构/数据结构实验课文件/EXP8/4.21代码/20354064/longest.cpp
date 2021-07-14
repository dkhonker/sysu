#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		int max=dp[1];
		int k=1;
		for(int j=1;j<i;j++){
		if(dp[j]>max){
	       k=j;
    //add something here for computing dp[i] 
	}
}
	max=dp[k];
	if(a[i]>a[k]){
		dp[i]=dp[k]+1;
	}
	else dp[i]=1;
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
	
}
    int max=dp[1];
	for(int i=1;i<=n;i++){
		if(dp[i]>max){
			max=dp[i];
		}
	}
	return max;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
