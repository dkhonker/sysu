#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[10001];
	int i,j,k,min;
	scanf("%d",&a[0]);
	for(i=1;i<=a[0];i++)     
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<=a[0];j++)
	{
		min=a[j],k=j;
		for(i=j;i<=a[0];i++)
		{
		if(a[i]<min)
		k=i;
		}
		a[j]=a[k];
    }
    for(i=1;i<=a[0];i++)
		{
		printf("%d ",a[i]);
		}
	return 0;
}
