#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[10000],n,t;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
	int k=i;
	for(int j=i+1;j<n;j++)
	{
	if(a[j]<a[k])
	{
	k=j;}
	}
	if(k!=i)
	{t=a[k];
	a[k]=a[i];
	a[i]=t;
	}
	}
	for(int i=0;i<n;i++)
	printf("%3d",a[i]);
	return 0;
}
