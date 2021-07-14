#include<stdio.h>
int main() {
int n=5;
int a[6];
for(int i=1;i<=n;i++)
   scanf("%d",&a[i]);
for(int i=1;i<=n;i++)
{
   int k=i;
   for(int j=i+1;j<=n;j++)
   if(a[k]>a[j])
   k=j;
   int t=a[i];
   a[i]=a[k];
   a[k]=t;
}
for(int i=1;i<=n;i++)
   printf("%d ",a[i]);
return 0;
}
