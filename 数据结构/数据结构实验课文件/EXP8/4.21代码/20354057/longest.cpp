#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];
int max(int a, int b){if(a>b) return a;return b;} 
int longestNum(){
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		//add something here for computing dp[i] 
		dp[i]=1;
		for(int j=1;j<n;j++){
			if(a[j]<a[i]){
				dp[i]=max(1,dp[j]+1);
			}
		}
	}
	int temp=0;
	temp=dp[1];
	for (int i = 2; i <= n; i++) {
		if(dp[i]>temp)
			temp=dp[i];
	}
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
	return temp;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
