#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum()
    {
    dp[1] = 1;int k=2,j=1,max=1;
   	for (int i = 2; i <= n; i++)
	   {
	   if(a[i]>a[i-1])
		   {
			dp[k]=max+1;
			max=dp[k];
			k++;	
	   	   } 
		else if(a[i]<a[i-1])
		   {
			for(j=i;j>0;j--)
			{
			 if(a[i]>dp[j])
			 dp[k]=dp[j]+1;
			 if(dp[k]>max)
			 max=dp[k];
			 k++;	  
			}
		   }		
		else
		   {
		   	dp[k]=dp[k-1];
		   	max=dp[k];
		   	k++;
		   }				                                                            	//add something here for computing dp[i] 
       }
	return max; 
   }                                                                         	//add something here for computing the final answer and return it
		                                                                          	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
   

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
