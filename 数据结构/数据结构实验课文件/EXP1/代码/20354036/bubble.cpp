#include<cstdio>
int main() {
	int num[10001],n,i,j,a;
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d",&num[i]);
	for(i=n; i>=2; i--)
	{
		for(j=1; j<i; j++)
		{
			if (num[j]>num[j+1])
			a=num[j];
			num[j]=num[j+1];
			num[j+1]=a;
		}
		
	}
	for(i=0; i<n; i++)
		printf("%d",num[i]);
	return 0;
}




















