#include<stdio.h>
//ц╟ещеепР 
int main()
{
	int change, n, a[10001], i, j, t;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	change = 1;
	for (i = 0; change = 1 && i < n; i++)
	{
		change = 0;
		for (j = 0; j < n-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				change = 1;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
