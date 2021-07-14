#include <stdio.h>
int main()
{
int a[10001];
int i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
int min=i;
for(j=i+1;j<=n;j++)
{
	if(a[j]<a[min])
	{
	min=j;
	}
}
if(i!=min)
{int t=a[i];
a[i]=a[min];
a[min]=t;
}
}
for(i=1;i<=n;i++)
printf("%d ",a[i]);
return 0;
} 
