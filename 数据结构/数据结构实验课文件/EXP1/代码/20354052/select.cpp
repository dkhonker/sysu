#include <iostream>
#define N 10000
#include <stdlib.h>
#include <string.h> 
int main(int argc, char** argv) 
{
	int a[N];
	int n,t,i,j,k,buf;
	printf("Please input the amout of your data:\n"); 
	scanf("%d",&n);
	printf("Please input the data:\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			{
				if(a[k]>a[j])
				{
					k=j;
				}
			}
		if(k!=i)
		{
			buf=a[k];
			a[k]=a[i];
			a[i]=buf;		
		}
	} 
	printf("The result of the result is:\n");
	for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
	system("pause");
	return 0;
}
