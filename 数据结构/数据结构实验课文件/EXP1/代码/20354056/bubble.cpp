#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int a[10001];
int n,i,j,k,co;
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=n,co=0;i>=2;i--)
{for(j=1;j<i;j++)
{if(a[j]>a[j+1])
{k=a[j];
a[j]=a[j+1];
a[j+1]=k;
co=1;}
}
if(co=0)break;
}
for(i=1;i<=n;i++)printf("%d",a[i]);
	return 0;
}
