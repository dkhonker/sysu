#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	char a[m];
	getchar();
	int front=0,rear=0;
	for(int i=0;i<n;i++){
		char instruct[5];
		gets(instruct);
		if(instruct[0]=='1'){
			a[rear]=instruct[2];
			rear=(rear+1)%m;
			printf("%d %d\n",front,rear);
		}
		else{
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
