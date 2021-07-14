#include <iostream>
#include<stdlib.h>
int main() 
{
	int k,i,j,n,a[10001],temp;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
		j=i;
	  for(k=k+1;k<=n;k++)
	  {if(a[k]<a[j])
	   temp=a[j];
	   a[i]=a[j];
	   a[j]=temp;}
	for(i=0;i<=n;i++)
	printf("%d",a[i]);
	system("pause");
	return 0;
}
