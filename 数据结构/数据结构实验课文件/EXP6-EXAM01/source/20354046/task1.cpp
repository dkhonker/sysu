#include <stdio.h>
int main(){
	int n,m;
	char b[3];
	scanf("%d%d",&m,&n);
	getchar();
	int s[21];
	int front=0,rear=0;
	int i;
	for(i=1;i<=n;i++){
		gets(b);
		
		if(b[0]=='1')
		{
			s[rear++]=b[2];
			if(rear==m)
			rear=0;
			printf("%d %d\n",front,rear);
		}
		else if(b[0]=='2'){
			front++;
			if(front==m)
			front=0;
			printf("%d %d\n",front,rear);
		}
	}
	while(front!=rear)
	{
		printf("%c",s[front]);
		front++;
	if(front==m)
		front=0;
	}
	return 0;
}
