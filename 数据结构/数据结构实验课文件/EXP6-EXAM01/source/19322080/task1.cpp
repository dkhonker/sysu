#include<stdio.h>
#define maxsize 20
int main(){
	int m,n,a[maxsize];
	scanf("%d",&m);
	scanf("%d",&n);
	int i,j,front=0,rear=0;
	char b;
	for(i=0;i<n;i++){
		scanf("%d",&j);
		getchar();
		if(j==1){
			scanf("%c",&b);
			rear=(rear+1)%m;
			a[rear]=b;
			printf("%d %d\n",front,rear);
		}
		else{
			front=(front+1)%m;
			printf("%d %d\n",front,rear);
		}
	}
	while(front!=rear){
		front=(front+1)%m;
		printf("%c",a[front]);
	}
	return 0;
} 
