#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[10001];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++)
  {
  	int min=a[i];
	 for(int j=i+1;j<n;j++)
    {
    	if(a[i]>a[j]])
    		min=a[j];
	
	}
	a[i]=min;
}
for(int i=0;i<n;i++)printf("%d",a[i]);
return 0;
} 
