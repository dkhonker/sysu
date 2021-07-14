#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	int num,temp,j;
	for (int i = 1; i <= n; i++) {
		num = 1, temp = a[i], j = i;
		while(j<n){
			if(temp<=a[j+1]){
				num++;
				j++;
				temp=a[j];
			}
			else j++;
		}
		dp[i] = num;
		//add something here for computing dp[i] 
	}
	
	int max = dp[1];
	for(int i = 2; i <=n; i++)if( max < dp[i] ) max = dp[i];
	return max;
	//add something here for computing the final answer and return it.
	//Note: the final answer equals max{dp[1],dp[2],...,dp[n]}
}

int main() {
	scanf("%d", &n);                                      //总共有n个数字 
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);      //输入n个数字 
	printf("%d", longestNum());
	return 0;
}
