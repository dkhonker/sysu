#include <stdio.h>
int main(){
	char a[m],b[0];
	int m,n,i,k;
	int front=0,rear=0;
	scanf("%d %d",&m,&n);
	for(i=1;i<=n;i++){
		scanf("%d %s",&k,b);
		if(k==1){
			a[rear]=b[0];
			rear++
		}
		if(k==2){
			a[front]='\0';
			front++;
		}  	
	}
	printf("%s",a);
	return 0;
}

