#include<stdio.h>
int main()
{
	int a[5];
	int i,j;
	int k;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<4;i++)
	{for(j=i+1;j<5;j++)
	{
	if(a[i]>a[j])
	k=a[i];
	a[i]=a[j];
	a[j]=k;
    }
	}
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
    return 0;
}
