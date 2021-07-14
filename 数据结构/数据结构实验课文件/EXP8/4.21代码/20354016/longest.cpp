#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];
int max = 1;

int longestNum(){
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		//add something here for computing dp[i] 
		for(int j = i-1; j > 0; j--)
		{
			if(dp[j] >= dp[i]&&a[i] > a[j])
			{
				dp[i] = dp[j] + 1;
			}		
		}
		if(dp[i] >= max)
		    {
			  max = dp[i];
		    }
	} 
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
	return max;
}

int main() {
	scanf("%d", &n);                          //n为输入数字个数 
	getchar();
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
