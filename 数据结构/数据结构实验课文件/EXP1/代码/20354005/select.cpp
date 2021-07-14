#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n;
int main(int argc, char** argv) {
    int a[10001];
    scanf("%d",&n);
    	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
    for(int i=1;i<n;i++)
    {
    	for(int j=i+1;j<=n;j++)
    	{
    		if(a[i]>a[j])
    		{
    			int temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
			}
		}
	}
	for(int i=1;i<=n;i++)
	printf("%d ",a[i]);
	return 0;
}
