#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	getchar();
	char a[m];
	int front=0,rear=0;
	for(int i=0;i<n;i++){
		char str[5];
		gets(str);
		if(str[0]=='1'){
			a[front]=str[2];
			front=(front+1)%m;
			printf("%d %d\n",rear,front);
			continue;
		}
		else{
			rear=(rear+1)%m;
			printf("%d %d\n",rear,front);
		}
	}
	while(front!=rear){
		printf("%c",a[rear]);
		rear=(rear+1)%m;
	}
	return 0;
}
