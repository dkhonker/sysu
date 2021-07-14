#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum()
{
	int temp;
	int max;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) 
	{ 
		temp = 1;
		for (int j = 2; j < i; j++)
		{
			if (a[i] > a[j] && dp[j] + 1 > temp)
				temp = dp[j]+1;

		}
		dp[i] = temp;
		//add something here for computing dp[i] 
	}
     max = dp[1];
	for (int i = 1; i <= n; i++)
	{
		 
		if (dp[i] > max)
			max = dp[i];
		
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
