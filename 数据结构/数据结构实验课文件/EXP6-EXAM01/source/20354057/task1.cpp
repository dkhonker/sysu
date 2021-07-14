#include <stdio.h>
#include <stdlib.h>
int front=0,rear=0;

int main() {
	int m,n; 
	scanf("%d %d",&m,&n);
	char c[m];
	char d[4];
	int a=m;

	for(int i=0;i<=n;i++){
		gets(d);
		if (d[0]=='1')
 			{
				c[rear]=d[2];
				rear=(rear+1)%a;
				printf("%d %d\n",front,rear);
 			}
			else if (d[0]=='2')
			{
				front=(front+1)%a;
				printf("%d %d\n",front,rear);
			}
	}
	printf("%d %d\n",front,rear);
	int j=front;
	for(int j=front;j!=rear;j=(j+1)%a)
	{
		printf("%c",c[j]);
	}
	return 0;
}
