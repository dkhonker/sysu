#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int maxs(int a,int b)
{
	if(a>b) return a;
	else return b;
}

int longestNum(){
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		int max = 0;
		for(int j = 1;j <i;j++)
		{
			if(a[i] > a[j])
			{
				max = maxs(dp[j],max);
			}
			
		}
		dp[i] = max + 1;
		//add something here for computing dp[i] 
	}
	int t = 0;
	for(int i = 1;i<=n;i++)
	{
		if(dp[i] > t) t = dp[i];
	}
	return t;
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}




int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
