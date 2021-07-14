#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(int n,int a[]){
	dp[1] = 1;
	int max_get=0;
	if (a[2]>a[1]){
	max_get=a[2];}
	else max_get=a[1];
	for (int i = 2; i <= n; i++) {
		for(int j=1;j<i;j++){
	        if(a[i]>max_get){
	        	max_get=a[j];
	        	dp[i]=dp[i-1]+1;
			}
			else dp[i]=dp[i-1];
	}
	   //add something here for computing dp[i] 
	}
	
	return dp[n];
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum(n,a));
	return 0;
}
