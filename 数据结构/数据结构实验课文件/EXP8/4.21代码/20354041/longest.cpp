#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], dp[MAXN + 1] = {0};

int longestNum() {
	dp[0] = 1;
	for (int i = 1; i < n; i++) {
		int j = i - 1;
		while (dp[i] == 0&&j>=0) {	
			if (a[j] < a[i]) {
				dp[i] = dp[j] + 1;
				break;
			}
			else j--;
		 }
		if (j < 0 && dp[i] == 0) dp[i] = 1;
	}
	int max = dp[0];
	for (int i = 0; dp[i] != 0; i++) {
		if (dp[i + 1] > max) max = dp[i + 1];
	}
	return max;
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
