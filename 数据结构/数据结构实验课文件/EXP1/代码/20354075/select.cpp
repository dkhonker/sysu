#include<stdio.h>
int n,m,i=1,j,t;
int a[10001];
int main()
{
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	     scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{ 
	  m=a[i];
	  for(j=i+1;j<=n;j++)
	    {
		 if(m>a[j])
	      m=a[j];
		}
      a[j]=t;t=m;m=a[j];
	}
	for(i=1;i<=n;i++)
	     printf("%d",a[i]);	 	     
}
