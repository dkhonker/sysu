#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1];

int longestNum(){
	dp[1] = 1;
	int l,i,max=1; 
	for (l=1,i = 2; i <= n; i++) {
		for(int j=i;j<=n&&n-i>max;j++)
			if(a[j]>a[j-1])l++;
		max=l;
	}
	
	return max;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
