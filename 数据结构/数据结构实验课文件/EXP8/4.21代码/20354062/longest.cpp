#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		int k;
		for(k=i-1;k>=1;k--){
			if(a[i]>a[k]){
				dp[i]=dp[k]+1;
				break;
			}
		}
		if(k==0)dp[i]=1;
	}
	int max=1;
	for(int j=1;j<=n;j++){
		if(dp[j]>max)max=dp[j];
	}
	return max;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
