#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,i,j,a[10001],t,flag;
	flag = 0;//用来判断是否发生了交换 
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n;i>=2;i--)
	{
		for(j=1;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				flag = 1;
			}
		}
		if(flag==0) break;
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
