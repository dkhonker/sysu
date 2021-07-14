#include<stdio.h>

int main(){
	int enter(int s[],int front,int rear,int x);
	int out(int s[],int front,int rear);
	int m,n;
	char nu;
	scanf("%d%c%d",&m,&nu,&n);
	int i=0;
	int front=0,rear=0;
	int j;
	char x;
	int s[120];
	while(i<n){
		scanf("%d",&j);
		if(j==1){
			scanf("%c%c",&nu,&x);
		    s[rear]=x;
	        rear=(rear+1)%m;
	        printf("%d %d\n",front,rear);
	        i++;
		}
		else if(j==2){
		front=(front+1)%m;
	    printf("%d %d\n",front,rear);
	    i++;
		}
	}
	
	while(front!=rear)
	{
		printf("%c",s[front]);
		front=(front+1)%m;
	}
	return 0;
}
