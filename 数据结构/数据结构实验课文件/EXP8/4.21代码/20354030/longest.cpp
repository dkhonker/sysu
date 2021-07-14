#include<stdio.h>
const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;int max=dp[1],max1=dp[1];
	for (int i = 2; i <= n; i++) {
		for(int k=1;k<i;k++){
			if(a[k]<a[i]){
				if(max<=dp[k]) {max=dp[k];max=max+1;}}	
		else max =1;}dp[i]=max;
    	}
		
for(int j=2;j<=n;j++)
	{
		if(max1<dp[j]) {
		max1=dp[j];}
		
	}
	return max1;
}	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
