#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	int min=a[1];
	int max=0;
	for (int i = 2; i <= n; i++) {
		int flag=0;
		if(a[i]<=min){
			min=a[i];
			dp[i]=1;
		}
		else{
			for(int j=i-1,k=0;j>=1;j--){
				if(a[j]<a[i]&&dp[j]>k){
					k=j;
					}
				}
				dp[i]=dp[k]+1;
					if(dp[i]>max){
						max=dp[i];
					}
			}
			
		}
		//add something here for computing dp[i] 
	return max;
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
