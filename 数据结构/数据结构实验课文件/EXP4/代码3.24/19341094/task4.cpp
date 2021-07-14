#include<stdio.h>

int main(){
	
	int m,n;
	int front=0,rear=0,mark;
	
	scanf("%d%d",&m,&n);
	
	char s[m],x;
	
	for(int i=0;i<n;i++){
		scanf("%d",&mark);
		getchar();
		if(mark == 1){
			s[rear%(m)] = getchar();
			rear++;
		}
		else
			front++;	
		printf("%d %d\n",front,rear%(m));
	}
	
	for(int i=front;i<rear;i++){
		printf("%c",s[i%(m)]);
	}
}
