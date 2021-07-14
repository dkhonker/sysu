#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int m,n;
	scanf("%d%d",&m,&n);
	getchar();
	char a[m];
	int front=0;
	int rear=0;
	for (int i=0;i<n;i++)
	{
		char b[5];
		gets(b);
		if(b[0]=='1'){
			a[rear]=b[2];
			rear=(rear+1)%m;
		}else front=(front+1)%m;
		printf("%d %d\n",front,rear);
		
	}
	while(front!=rear)
	{
		printf("%c",a[front]);
		front=(front+1)%m;
	}
	return 0;
}
