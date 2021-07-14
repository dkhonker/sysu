#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	int t;
	int j=1;
	for (int i = 2; i <= n; i++) {
		//add something here for computing dp[i] 
		t=dp[i-1];
		int count=0;
		dp[i]=dp[1];
		for(j=1;j<i;j++){
			if(a[i]>a[j]){
				count++;
				if(count==1){dp[i]=dp[j];
				}else{
				if(dp[i]<dp[j]) dp[i]=dp[j];
			    }
			}
		}
		if(count!=0) dp[i]++;
		if(t<dp[i]) t=dp[i];
	}
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
    return t;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d\n", longestNum());
	return 0;
}
