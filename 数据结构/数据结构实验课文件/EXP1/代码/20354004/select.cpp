#include<stdio.h>
int n;
int a[10001];
int min[10001];
int main()
{
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
{min[i]=a[i];
for(int j=i+1;j<n;j++)
if(a[j]<min[i])
{int temp=a[j];a[j]=min[i];min[i]=temp;}
}
for(int i=0;i<n;i++)
printf("%d",min[i]);
return 0;
}
  
