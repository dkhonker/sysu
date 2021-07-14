#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	for (int j=2; j<=n; j++) { 
		 if(a[j]>a[j-1]&&dp[j]<dp[j-1]+1)
		 {
		 	dp[j]=dp[j-1]+1;
		 }
		 else
		 {
		 	dp[j]=dp[j-1];
		 }
   }
	int *max;
	max=dp+1;
	for(int j=1;j<=n;j++)
	{
		if(*max<*(dp+j))
		{
			*max=*(dp+j);
		}
	}	
	return *max;
	//find dp[max]
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
