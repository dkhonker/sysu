#include <stdio.h>
#include<string.h> 
int main(){
	int m,n,s[21],front=0,rear=0,*q=s,fid,x;
	scanf("%d%d",&m,&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&fid,&x);
		if(fid==1){
			in(s[21],front,rear,q);
			printf("%d %d",front,rear);
		}
		else{
			out(s[21],front,rear,x);
			printf("%d %d",front,rear);
		}
	}
	in(s[21],front,rear,*q)
	printf("%s",a);
	
}
int in(int s[],int front,int rear,int *q){
	if(front==rear)return -1;
	else{
		*q=s[front];
		front=(front+1)%;
		return 0;
	}
}
int out(int s[],int front,int rear,int x){
	if(((rear+1)%m)==front)
	return -1;
	else{
		s[rear]=x;
		rear=(rear+1)%m;
		return 0;
	}
	
} 
