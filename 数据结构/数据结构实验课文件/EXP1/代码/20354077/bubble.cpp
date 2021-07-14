#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int c[10001] ,i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			if(c[i]>c[j]) 
			{
			temp=c[j];c[j]=c[i];c[i]=temp;
		    }
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",c[i]);
	return 0;
}
