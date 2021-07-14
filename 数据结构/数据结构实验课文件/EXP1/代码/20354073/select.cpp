#include<stdio.h>
int main()
{
	int a[5];
	int i;
	int x;
	int k,j;
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<4;i++)
	{
	k=i;
	for(j=i+1;j<5;j++)
	{
	if(a[k]>a[j])
	k=j;
	}
	x=a[i];
	a[i]=a[k];
	a[k]=x;
    }
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
    return 0;
}
