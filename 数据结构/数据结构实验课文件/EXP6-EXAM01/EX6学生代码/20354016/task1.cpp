#include <stdio.h>
int main(){
	char a[21];
	int m,n;
	scanf("%d%d",&m,&n);
	getchar();
	int front=0;
	int rear=0;
	int p;
	for(int i=0;i<n;i++){
		char p[4];
		gets(p);
		if(p[0]=='1'){
			a[rear]=p[2];
			rear=(rear+1)%m;
		}else front=(front+1)%m;
	printf("%d %d\n",front,rear);
	}
	while (1){
		printf("%c",a[front]);
		front=(front+1)%m;
		if(front==rear) break;
	}
	return 0;
}
