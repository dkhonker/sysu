#include<stdio.h>
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	getchar();
	int i=0;
	char b[3];
	int front=0,rear=0;
	char c[10000];
	for(i=0;i<n;i++){
		gets(b);
	    if(b[0]=='1'){
	    	c[rear]=b[2];
	    	rear++;
	    	if(rear==m)rear=0;
	    	printf("%d %d\n",front,rear);
		}
		if(b[0]=='2'){
			front++;
			printf("%d %d\n",front,rear);
		}
	}
	while(front!=rear){
		printf("%c",c[front]);
		front++;
		if(front==m)front=0;
	}
	return 0;
} 

