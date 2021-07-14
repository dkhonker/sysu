#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;int max=1;int small=0;int maxdp=1;
	for (int i = 2; i <= n; i++) {
		for(int j=1;j<i;j++){
			if(a[j]<a[i]){
				small=1;
				if(dp[j]>max)
					max=dp[j];
				}
		} 
		if(small==1)dp[i]=max+1;
		else
		dp[i]=1;
		max=1;
		if(dp[i]>maxdp)
		maxdp=dp[i];
		small=0;
		//add something here for computing dp[i] 
	}
	return maxdp;
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
