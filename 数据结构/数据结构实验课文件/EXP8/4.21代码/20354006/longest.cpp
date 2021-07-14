#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;            //dp[1]为目前最大长度 
	for (int i = 2; i <= n; i++) {
		dp[i] = 1;
	 	for(int j = 1;j<n;j++)
	 		for(int k = j+1;k<=n;k++)
	 		if(a[j]<a[k])
	 			{	j=k;
				dp[i]++;
	 			continue;
				}
	}
	for(int i = 1;i<=n;i++)
		if(dp[1]<dp[i])
			dp[1]=dp[i];  
	return dp[1];
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) 
		scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
