#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	for (int i = 2; i <= n; i++) 
	{
		int cnt = 1;
		for(int j = i - 1; j >= 1; j--)
		{
			if(a[i] > a[j])
			{
				if(cnt >= dp[j]+1)
				{
				    cnt = cnt;
			    }
			    else
			    {
			    	cnt = dp[j]+1;
				}
			}
		}
		dp[i] = cnt;
		//add something here for computing dp[i] 
	}
	int ans = 0;
	for(int i = 0; i < n; i++)
	{
		if(ans >= dp[i])
		{
			ans = ans;
		}
		else
		{
			ans = dp[i];
		}
	}
	return ans;
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
