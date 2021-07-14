#include <stdio.h>
int a[10001];
	int n;
	int j;
	
int main(){
	scanf("%d",&n);
		for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;++i){int min=a[i];
	for(j=i+1;j<=n;++j)
	{
	
		if(min>a[j])
		min=a[j];
	}
	int temp;
	temp=a[j];
	a[i]=min;
	a[j]=temp;
	}
	for(int i=1;i<=n;++i)
	printf("%d ",a[i]);
} 
