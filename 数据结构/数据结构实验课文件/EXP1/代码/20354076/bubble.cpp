#include <iostream>
#include<stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main()
{
	int a[10001];
	int i,j;
	int n;
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d",&a[i]);
    for (j=n;j>=2;j--)
        for(i=1;i<j;i++)
            {
            	if(a[i]>a[i+1])
				 {
            		int b=a[i];a[i]=a[i+1];a[i+1]=b;
				}
			}
	for(i=1;i<=n;i++) printf("%d",a[i]);
	return 0;
 } 
