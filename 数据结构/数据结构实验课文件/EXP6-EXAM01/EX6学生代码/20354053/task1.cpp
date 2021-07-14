#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int front=0,rear=0,m,n,x;
	char arr[20];
	scanf("%d,%d",&m,&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		getchar();
		if(x==1){
			scanf("%c",&arr[rear]);
			rear++;
			if(rear==n-1) rear=0;
			printf("%d %d\n",front,rear);
		}
		else if(x==2){
			front++;
			printf("%d %d\n",front,rear);
		}
	}
	for(int i=front;i<n;i++){
		printf("%c",arr[i]);
	}
	return 0;
}
