#include<stdio.h>
int n;
int a[10001];
int main(int argc,char *argv[])
{
	scanf("d",&n);
	for(i=1;i<=n;i++)
	    for(j=i+1;j<=n;j++)
	        if(a[i]>a[j])
	        temp=a[j];a[j]=a[i];a[i]=temp;
	for(i=1;i<=n;i++)
    printf("%d",a[i]);
    return 0;	        
}
