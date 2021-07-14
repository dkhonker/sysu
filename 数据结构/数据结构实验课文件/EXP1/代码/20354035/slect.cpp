#include<stdio.h>
int n;
int a[10001];
int main ()
{scanf("%d",&n);
 for(int i=1;i<=n;i++)
 scanf("%d",&a[i]);
 for(int i=1;i<=n;i++)
 {int j=i;
 for(int k=i+1;k<=n;k++)
 if(a[k]<a[j])
 j=k;
 int temp=a[i];a[i]=a[j];a[j]=temp;
  }
  for(int i=1;i<=n;i++)
  printf("%d",a[i]);
  return 0;
}
