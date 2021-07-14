#include<stdio.h>
int main()
{
	int A[10001];
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  scanf("%d",&A[i]);
	for(i=0;i<n-1;i++)
	  for(j=0;j<=n-i-1;j++)
	  	if(A[j]>A[j+1])
	  	{
	  		k=A[j];
	  		A[j]=A[j+1];
	  		A[j+1]=k;
		}
	for(i=1;i<=n;i++)
	printf("%d ",A[i]);
	return 0;
 } 
