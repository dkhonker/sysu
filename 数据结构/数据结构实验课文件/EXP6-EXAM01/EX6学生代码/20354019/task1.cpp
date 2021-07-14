#include<stdio.h>
#include <stdlib.h>
int main()
{
	int m;
	int n;
	scanf("%d%d",&m,&n);
	getchar();
	char q[m];
	int front=0;
	int rear=0;
	for(int i=0;i<n;i++)
	{
		char a[5];
		gets(a);
		if(a[0]=='1'){
		q[rear]=a[2];
		rear=(rear+1)%m;
		}else front=(front+1)%m;
		printf("%d %d\n",front,rear);
	}
		while(front!=rear){
			printf("%c",q[front]);
			front= (front+1)%m;
		}
	return 0;
 } 
