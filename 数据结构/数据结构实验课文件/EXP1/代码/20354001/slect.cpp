

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include<stdio.h>
	int n;
	int a[10001];
int main() 
	
{
     scanf("%d",&n);

     int temp;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
	{
		for(int j=i ,*p=&a[j];j<=n;j++)
		{
		
			if(*p>a[j])
			{
				p=&a[j];
			}
			temp=a[i];
			a[i]=*p;
			*p=temp;
		}
	}
	for(int i=1;i<=n;i++) printf("%d ",a[i]);
	return 0;
}
