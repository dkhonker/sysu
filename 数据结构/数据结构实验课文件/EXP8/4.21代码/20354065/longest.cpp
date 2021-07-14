#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum()
{
	dp[1] = 1;
	for (int i = 2; i <= n; i++) 
	{        //dp[i]对应的数值a[i-1]与前面所有数值比较，如果有任意一个比它小，dp[i]+1 
		dp[i] = 1;
		int temp = a[i];
		for(int j = i-1; j > 0; j--)     //与前面所有的数进行比较 
		{
			if (a[j] < temp) 
			{
				temp = a[j];
				dp[i]++;
			}
		}
		//add something here for computing dp[i] 
	}
	int dpmax = dp[1];
	for (int i = 2; i <= n; i++)
	{
		if (dp[i] > dpmax) dpmax = dp[i];
	}   
	return dpmax;
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
