#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int m,n;
	scanf("%d %d",&m,&n);
	int front=0,rear=0;
	char c[m],c1;
	int i=1,w,k=0,j=1;
	while(i<=n)
	{
		scanf("%d",&w);
		scanf("%c",&c1);
		if(w==1)
		{
			scanf("%c",&c[rear]);
			rear=(rear+1)%m;
			printf("%d %d\n",front,rear);
			i++;
			k++;
		}
		if(w==2)
		{
			front=(front+1)%m;
			i++;
			k--;
			printf("%d %d\n",front,rear);
		}
	}
	int a=front;
	while(j<=k)
	{
		printf("%c",c[a]);
		a=(a+1)%m;
		j++;
		
	}
	return 0;
}
