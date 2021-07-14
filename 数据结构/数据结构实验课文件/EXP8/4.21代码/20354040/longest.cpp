#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	for (int i = 2; i <= n; i++) 
	{
		//add something here for computing dp[i] 
		int mdp = 0;
		for(int j = 1; j < i; j++)
			if(a[j] < a[i])
				if(mdp < dp[j])
					mdp = dp[j];
		dp[i] = mdp + 1;
	}
	 
	//add something here for computing the final answer and return it.
	int max = 1;
	for(int i = 1; i <= n; i++)
		{
			if(max < dp[i])
				max = dp[i];
		}
	return max;
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) //´Ó1¿ªÊ¼ 
		scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
