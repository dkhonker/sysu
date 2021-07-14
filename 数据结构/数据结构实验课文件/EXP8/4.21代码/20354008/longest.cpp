#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1],dp1[MAXN+1];

int longestNum(){
	char b[MAXN+1];
	dp[1] = 1;
	
	for (int i = 1; i <= n; i++) {
		for(int k=0;k<=n;k++){
		b[k]=a[k];
	}
		for(int j=i,k=1;j<=k,k<=n;k++){
			if(b[j]<b[k]&&dp[i]>0){
				b[j]=b[k];
				dp[i]+=1;
			}
			else if(b[j]<b[i]&&dp[i]==0){
				b[i]=b[j];
				dp[i]=2;
			}
		}
		//add something here for computing dp[i] 
	}
	for(int i=0;i<n;i++){
		if(dp[i]>dp[1]){
			dp[1]=dp[i];
		}
	}
	return dp[1];
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
