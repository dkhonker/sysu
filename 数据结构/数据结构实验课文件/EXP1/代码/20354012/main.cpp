#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	int a[10001], n, temp;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	scanf("%d",&a[i]);
	for(int i=1; i<=n-1; i++)
		for(int j=i+1; j<=n;j++)
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	for(int i=1;i<=n;i++)
		printf("%d\t",a[i]);
	return 0;
}
