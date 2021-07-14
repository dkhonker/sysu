#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int m,n;
	scanf("%d %d",&m,&n);
	char c,c1;
	scanf("%c",&c);
	int front=0,rear=0;
	char s[m];
	int i,k,q=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&k);
		if(k==1)
		{
		scanf("%c",&c);
		scanf("%c",&c1);
		s[front]=c1;
		rear=(++rear)%m;
		printf("%d %d\n",front,rear);
		q++;
	    }
	    else if(k==2)
	    {
	    front=(++front)%5;
	    printf("%d %d\n",front,rear);
	    q--; 
		}
	}
	for(int i=front;i%m!=rear&&q!=0;i++)
	printf("%c",s[i%m]);
	return 0;
}
