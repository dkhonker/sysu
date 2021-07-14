/*
贪心算法： 
    局部最优达到全局最优
	核心是找到局部最优的条件 
*/ 

#include<stdio.h>
int main(){
	int dp[3000]={0},a[3000]={0},n;
	int max=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		dp[i]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=i-1;j>0;j--){
			if(a[i]>a[j]&&dp[j]>=dp[i]){
				dp[i]=dp[j]+1;
                if(dp[i]>max){
                	max=dp[i];
				}	
			}
		}
	}
	printf("%d",max);
	return 0;
}
