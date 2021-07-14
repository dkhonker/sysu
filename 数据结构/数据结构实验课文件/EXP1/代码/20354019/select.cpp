#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n;
	int a[10001];
	int t;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
	if(a[j]<a[i])
	{
	t=a[j];
	a[j]=a[i];
	a[i]=t;
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
