#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum()
{
	dp[1] = 1;  //0

	for (int i = 2; i <= n; i++) 
	{
		int max_dp = 0;
		for (int j = 1; j < i; j++)
		{
			if (a[j] < a[i])
			{
				if (max_dp < dp[j])
					max_dp = dp[j];	
			}
		}
		dp[i] = max_dp + 1;	
		//add something here for computing dp[i] 
	}
	
	int max = 0;
	for(int k = 1; k <= n; k++)
	{
		if(max < dp[k])
			max = dp[k];
	}
	
	return max;
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() 
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
