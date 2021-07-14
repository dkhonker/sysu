#include<stdio.h>
int k, a[20] = {0};
void gray(int, int);
void gray(int n, int t) {
	if (!a[n - 2])
		a[n] = t;
	else 
		a[n] = !t;
	if (n == k + 2)
	{
		for (int i = 3; i <= k + 2; i++)
			printf("%d", a[i]);
		printf("\n");
		return;
	}
	gray(n + 1, t);
	gray(n + 1, !t);
}
int main() {
	scanf_s("%d", &k);
	gray(2, 0);
	return 0;
}
