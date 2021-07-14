#include <stdio.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) 
{
	int temp,n,a[10005],max;
	scanf("%d",&n); 
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	   for(int j=i;j<=n;j++)
	   {
          if(a[j]>a[i])
          {
          	temp=a[j];
          	a[j]=a[i];
          	a[i]=temp;
		  }
	   } 
	printf("%d",a[1]);
	for(int i=2;i<=n;i++)
	printf(" %d",a[i]);
	return 0;
}
