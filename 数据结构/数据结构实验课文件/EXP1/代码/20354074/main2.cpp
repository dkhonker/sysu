#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[10000];
	int b=0;
	scanf("%d",&b);
	for(int x=0;x<10000;x++)a[x]=0;
	for(int x=0;x<b;x++)scanf("%d",&a[x]);
	int re=0,k=0;
	for(int x=0;x<b;x++){k=x;int y;for(y=x;y<b;y++)if(a[y]<a[k])k=y;re=a[x];a[x]=a[k];a[k]=re;}
	for(int x=0;x<b;x++)printf("%d ",a[x]);	
	return 0;
}
