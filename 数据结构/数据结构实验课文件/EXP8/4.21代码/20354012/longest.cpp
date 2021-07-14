#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}

int longestNum(){
	int Max;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		int m = 0;
		for(int j = i-1;j>1;j--)
		{
			if(a[j]>a[j-1])
			{
				m++;
			}
		}
		dp[i] = m+1;
		Max = max(dp[i-1],dp[i]);

	}
		//add something here for computing dp[i] 
	return Max;
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}


int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
