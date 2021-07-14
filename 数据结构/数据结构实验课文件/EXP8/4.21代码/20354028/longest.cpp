#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];
int max(int x, int y){
	if(x>=y)
	return x;
	else
	return y;
}


int longestNum(){
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		int len;
		for (int k = i-1; k >= 1; k--)
		{
			if(a[k] < a[i])
			{
				len = max(len, dp[k] + 1);
			}
		 } 
		 dp[i] = len;
		//add something here for computing dp[i] 
	}
	int max1 = 0;
	for(int i = 1; i < n; i++)
	{
		max1 = max(max1, dp[i]);
	}
	return max1;
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
