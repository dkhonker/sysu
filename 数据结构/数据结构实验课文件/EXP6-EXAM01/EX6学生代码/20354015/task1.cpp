#include<stdio.h>

main(){
	int n,m,i,t[n];
	char s[19],x,sx;
	scanf("%d %d",&m,&n);
	int front,rear;
	front=0;
	rear=0;
	for(i=1;i<=n;i++){
		scanf("%d",&t[i-1]);
		if(t[i-1]==1){
			scanf("%c%c",&sx,&x);
			s[rear]=x;
			rear=(rear+1)%m;
			printf("%d %d\n",front,rear);
		}
		else if(t[i-1]==2){
			front=(front+1)%m;
			printf("%d %d\n",front,rear); 
		}
	}
	while(front!=rear){
		printf("%c",s[front]);
		front=(front+1)%m;
	}
} 
