#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];
int max;
int longestNum(){
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		//add something here for computing dp[i] ��F[j]�� :��a[j]��β�������������еĳ��� 
		if(a[i]>a[i-1]) dp[i]=dp[i-1]+1;
		else dp[i]=dp[i-1];
		
	}
	max=dp[1];
	for(int k=1;k<=n;k++)
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
	{
	if(dp[k]>max)max=dp[k];
	}
	return max;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);//nΪ���鳤�ȣ�Ԫ�ظ����� 
	printf("%d", longestNum());
	return 0;
}
