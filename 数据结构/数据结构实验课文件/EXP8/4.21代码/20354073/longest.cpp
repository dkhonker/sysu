#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum()
{
	int max=0;
	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;
		for (int j = i + 1,k = i; j < n; j++)
		{
			if (a[j] > a[k])
				dp[i] += 1;
			k = j;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (dp[i] > max)
		{
			max = dp[i];
		}
	}
	return max;
}
int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
