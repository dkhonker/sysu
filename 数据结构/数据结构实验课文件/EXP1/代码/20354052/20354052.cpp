#include <iostream>
#define N 10000
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int a[N];
	int n,t,i,j;
	printf("Please input the amount of the data:");
	scanf("%d",&n);
	printf("Please input the data:\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++)
		{
		for(j=i+1;j<n;j++)
			{
				if(a[i]>=a[j])
					{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
					}
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
