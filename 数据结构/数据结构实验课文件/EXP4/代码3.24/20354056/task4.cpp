#include<stdio.h>
int main(){
	char a[101],b;
	int m,n,i,front=0,rear=0,j=0;
	int c[101],d[101];
	scanf("%d %d\n",&m,&n);
	for(;n>0;n--){
		scanf("%d %c\n",&i,&b);

		if(i=1){
		a[rear++]=b;
		c[j]=front;
		d[j++]=rear;
		}		
		if(i=2){
			a[front++]='\0';
			c[j]=front;
			d[j++]=rear;
			}
	}
	for(i=0;i<j;i++)
	printf("%d %d\n",c[i],d[i]);
	puts(a);
	return 0;
}
