#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];



int longestNum(){
	dp[1] = 1;
	int i,j,max=dp[1],flag=0;
	for (i = 2; i <= n; i++) {
		flag=0;
		for(j=1,max=dp[1];j<i;j++){
			if(a[j]<a[i]){
				max=(dp[j]>max)?dp[j]:max;
				flag=1;
			}
		}
		if(flag)dp[i]=max+1;
		else dp[i]=1;
	}
	
	
	for(i=1,max=dp[1];i<=n;i++){
		max=(dp[i]>max)?dp[i]:max;
	}
	return max;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
