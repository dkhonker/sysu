#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum()
{
	dp[1] = 1;
	for (int i = 2; i <= n; i++) 
	{        //dp[i]��Ӧ����ֵa[i-1]��ǰ��������ֵ�Ƚϣ����������һ������С��dp[i]+1 
		dp[i] = 1;
		int temp = a[i];
		for(int j = i-1; j > 0; j--)     //��ǰ�����е������бȽ� 
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
