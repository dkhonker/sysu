#include<stdio.h>
//—°‘Ò≈≈–Ú
int main() 
{
	int min,p,t;
	int n,i,j,a[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		min = a[i];
		p = i;
		for (j = i + 1; j < n; j++) {
			if (min > a[j])
			{
				min = a[j];
				p = j;
			}
		}
		if (p != i) {
			t = a[i];
			a[i] = a[p];
			a[p] = t;
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
