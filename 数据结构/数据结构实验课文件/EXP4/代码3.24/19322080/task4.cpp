#include<stdio.h>
int main(){
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	char a[20];
	int front=0,rear=0;
	int i,j;
	char x;
	for(i=0;i<n;i++){
		scanf("%d",&j);
		if(j==1){
			getchar();
			scanf("%c",&x);
			a[rear]=x;
			rear++;
			if(rear==m){
				rear=0;	
			}
			
			printf("%d %d\n",front,rear);
		}
		if(j==2){
			front++;
			if(front==m){
				front=0;
			}
			printf("%d %d\n",front,rear);
		}
	}
	while(front!=rear){
		printf("%c",a[front]);
		front++;
		if(front==m){
			front=0;
		}
	}
	return 0;
}
