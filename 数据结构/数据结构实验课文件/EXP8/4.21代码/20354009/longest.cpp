#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	for (int i = 2; i <= n; i++) 
	{
		for (int j = 1; j < i; j++) 
		{
            if (a[j]<a[i]&& dp[i] < dp[j] + 1) //遍历该处之前的数，当数字小于当前值且dp[i]小于dp[j]+1时 （即找出最大的dp[j]） 
			{
                dp[i] = dp[j] + 1;
            }
        }
		//add something here for computing dp[i] 
	}
	
	int max = 0;
    for (int  i= 1; i <= n; i++) 
	{
        if (dp[i] > max)
		 max = dp[i];// 从longest[j]中找出最大值，即为最长长度
    }
    return max;
		//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
