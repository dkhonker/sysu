#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1]; //数字个数n,数组a长度为12001,子序列dp最大长度为12001 

int longestNum(){
	int index = 1;
	for (int i = 1; i <= n; i++) 
	{	dp[i] = 1;}			//dp数组中每个元素初始值都为1 
	for (int i = 1; i <= n; i++) 
	{	
		//add something here for computing dp[i] 找递增子序列长度 
		for(int j = i; j <= n; j++)
		{
			if(a[j+1]>a[j])
			{
				dp[i]++;		//若后一项大于前一项则长度+1 
			}
			else break;
		}
	}
	
	//add something here for computing the final answer and return it.比较各个子序列长度，返回最大值 the final answer equals max{dp[1],dp[2],...,dp[n]}
	for(int i = 1; i <= n; i++)
	{
		if(dp[i]>dp[index])
		{
			index = i;			//找出dp中长度最大一项的下标 
		}
	}
	return dp[index];
}

int main() {
	scanf("%d", &n);   //输入n 
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);	//输入整数序列 
	printf("%d", longestNum());		//输出结果 
	return 0;
}
