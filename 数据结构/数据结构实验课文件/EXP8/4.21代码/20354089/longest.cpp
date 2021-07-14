#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	int j,max;
	dp[0] = 1;
	for (int i = 1; i < n; i++) {
		max=0;
		for(j=0;j<i;j++)
		{
		    if(a[i]>a[j]&&max<dp[j])
		    {
		    	max=dp[j];
			}
			
	    }
		dp[i]=max+1;
		//add something here for computing dp[i] 
	}
	max=dp[0];
	for(int i=0;i<n;i++)
	{
		if(dp[i]>max)
		max=dp[i];
	}
	return max;
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
