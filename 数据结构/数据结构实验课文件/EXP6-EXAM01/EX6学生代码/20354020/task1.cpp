#include<stdio.h>
int main()
{
	int m,n,front=0,rear=0,i=0;
	scanf("%d%d",&m,&n);
	getchar();
	if(m<2||m>20||n>100||n<0) return 0;
	char a[m];
	for(i=0;i<n;i++){
		char b[3];
		gets(b);
		if(b[0]=='1'){
		a[rear]=b[2];
		rear=(rear+1)%m;	
		}
		else front=(front+1)%m;
		printf("%d %d\n",front,rear);
	}
	while(front!=rear){
		printf("%c",a[front]);
		front=(front+1)%m;
	}
	return 0;
}
