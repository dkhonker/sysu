#include <stdio.h>
main()
{
	int a[10000];
	int i,j,n,temp;
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	bool swap;
	for(int i=n;i>=2;i--)
	{
		swap=false;
		for(int j=1;j<i;j++)
		if(a[j]>a[j+1])
		{
			temp=a[j];a[j]=a[j+1];a[j+1]=temp;
			swap=true;
		}
		if(!swap)
		break;
	}
	for(int i=1;i<=n;i++)
	printf("%d\t",a[i]);
	return 0;
	}
