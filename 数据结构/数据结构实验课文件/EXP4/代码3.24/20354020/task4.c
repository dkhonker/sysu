#include<stdio.h>
int main(){
	int front=0,rear=1;
	int m,n,j,i,k=0;
	char a[20001];
	scanf("%d%d",&m,&n);
	
	for(i=0;i<n;i++){
		scanf("%d%c",&j,&a[k]);
		if(j=1){
			if(rear%m==0) {
				rear=0;
			    printf("%d %d\n",front,rear);
			}
			else {
				printf("%d %d\n",front,rear++);
				k++;
			}
		}
		else if(j=2){
			if(rear%m==0){
				rear=0;
			    printf("%d %d\n",++front,rear);
			}
			else{
				k--;
				printf("%d %d\n",++front,rear);
			}
		}
	}
	
	for(i=front;a[i]!='\0';i++)
	printf("%c",a[i]);
	
	return 0;
}
