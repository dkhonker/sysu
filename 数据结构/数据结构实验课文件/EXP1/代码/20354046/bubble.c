#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int a[10001];
	int n;
	int i,j;
	int t;
	int change=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	 for(j=n-1;j>2;j--)
	for(i=0;i<j;i++)
    	{if(a[i]>a[i+1])
			{t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;
			change==1; 
			}
		if(change==0)break;
		}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("%d",change);
	return 0;
}
