#include <stdio.h>
int main()
{
	int n;
	int a[10000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int isprime=1;
		for(int j=0;j<n-i-1;j++){
			int t;
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				isprime=0;
			}
			if(isprime)
				break;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
