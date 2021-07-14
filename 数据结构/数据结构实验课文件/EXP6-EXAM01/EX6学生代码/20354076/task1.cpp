#include<stdio.h>
int main(){
	int m,n;
	char str1[m];
	scanf("%d%d",&m,&n);
	int front,rear;
	front=0;
	rear=0;
	for(int i=0;i<n;i++){
		int k=0;
		int j;
		scanf("%d",&k);
		getchar();
		if(k==1){
			scanf("%c",&str1[rear++]);
			getchar();
		}
		if(k==2){
			front++;
		} 
		j=rear;
		if(i==n-1) {
		    rear=0;
			}
		printf("%d %d\n",front,rear);
		if(i==n-1) {
		    for(int w=front;w<j;w++){
		    printf("%c",str1[w]);
			}
			
		}
	}
	
	return 0;
} 
