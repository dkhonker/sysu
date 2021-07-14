#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int max(int c, int b) {
	if(c>=b) return c;
	else return b;
}

int longestNum(){
	dp[1] = 1;
	int len = 1; 
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if(a[j] < a[i]) dp[i] = max(dp[i], dp[j]);
		}
		dp[i] += 1;	
	}//add something here for computing dp[i] 
	int result = dp[1];
	for (int k = 2; k <= n; k++) {
		result = max(result, dp[k]);
	}
	return result;
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}



int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
