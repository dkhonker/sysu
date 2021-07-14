#include<stdio.h>
int main(){
	char a[20001],b[20001];int i=0;
	int n,m;
	scanf("%d %d",&n,&m);
    scanf("%s",a);
	
	for(;n-1<m;i++,n++)
	{
	b[i]=a[n-1];
}
	puts(b);
	return 0;
}
