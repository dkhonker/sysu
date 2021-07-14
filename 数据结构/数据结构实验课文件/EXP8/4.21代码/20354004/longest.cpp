#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(int a[]){
	int back=a[1];

	dp[1] = 1;
	int i;
	for (i = 2; i <= n; i++)
	 {
	 if(a[i]>back)
	 {
	 back=a[i];
	 dp[1]=dp[1]+1;
	 }
	 
	 }
	 
	return dp[1];	   	
	}
	



int main() {int longestNum(int a[]);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum(a));
	return 0;
}


