#include <stdio.h>
int main()
{
	int a[10001];
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int i,j,min;
	for(i=1;i<=n;i++){
		min=i;
		for(j=i;j<=n;j++){
			if(a[min]>a[j])
				min=j;
		}
		int t;
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
	for(i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
