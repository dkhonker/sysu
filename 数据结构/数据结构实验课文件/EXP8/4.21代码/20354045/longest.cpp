#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1]; //���ָ���n,����a����Ϊ12001,������dp��󳤶�Ϊ12001 

int longestNum(){
	int index = 1;
	for (int i = 1; i <= n; i++) 
	{	dp[i] = 1;}			//dp������ÿ��Ԫ�س�ʼֵ��Ϊ1 
	for (int i = 1; i <= n; i++) 
	{	
		//add something here for computing dp[i] �ҵ��������г��� 
		for(int j = i; j <= n; j++)
		{
			if(a[j+1]>a[j])
			{
				dp[i]++;		//����һ�����ǰһ���򳤶�+1 
			}
			else break;
		}
	}
	
	//add something here for computing the final answer and return it.�Ƚϸ��������г��ȣ��������ֵ the final answer equals max{dp[1],dp[2],...,dp[n]}
	for(int i = 1; i <= n; i++)
	{
		if(dp[i]>dp[index])
		{
			index = i;			//�ҳ�dp�г������һ����±� 
		}
	}
	return dp[index];
}

int main() {
	scanf("%d", &n);   //����n 
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);	//������������ 
	printf("%d", longestNum());		//������ 
	return 0;
}
