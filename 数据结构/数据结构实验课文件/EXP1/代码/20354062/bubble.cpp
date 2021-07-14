#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
     
	int n,i,j,t;
	int a[10001];
	scanf("%d",&a[0]);
	n=a[0];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{for(j=i;j<n;j++)
	{	if(a[j]>a[j+1])
			{t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			}
	}
	}
	
	for(i=1;i<=n;i++)
	printf("%d ",a[i]);

	return 0;
}
