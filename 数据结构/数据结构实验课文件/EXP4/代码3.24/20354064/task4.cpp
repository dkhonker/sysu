#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int c,front,rear,mark;
	char inp;
	char a[m];
	front=rear=0;
	for(int k=1;k<=n;k++){
		scanf("%d",&c);
		if(c==1){
		getchar();
		inp=getchar();
			a[rear%m]=inp;
			rear=(rear+1)%m;
			printf("%d %d\n",front,rear);
		}
		if(c==2){
			front=(front+1)%m;
			printf("%d %d\n",front,rear);
		}
	}
	while(front!=rear){
		printf("%c",a[front]);
		front=(front+1)%m;
	}
	return 0;
}
