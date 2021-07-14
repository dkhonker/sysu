#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[10000],n,t;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	int min=i,k=i;
	for(int j=1;j<n;j++)
	{
	if(a[j]<a[k])
	k=j;
	}
	if(k!=min)
	{t=a[k];
	a[k]=a[min];
	a[min]=t;
	}
	for(int i=1;i<=n;i++)
	printf("%3d\n",a[i]);
	return 0;
}
