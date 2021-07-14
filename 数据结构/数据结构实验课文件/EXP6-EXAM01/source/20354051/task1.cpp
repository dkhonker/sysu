#include <stdio.h>
#include <stdlib.h>
int m,n;
char q[21];
int front=0, rear=0,p=1,order;
void move(char q[21]){
	int i=1;
	for(;i<m+1;i++)
	q[i]=q[i+1];
	front++;
	p--;
}

int main(){
	scanf("%d%d",&m,&n);
	for(int i=0;i<n;++i)
	{
		scanf("%d",&order);
		getchar();
		if(order==1){
			rear++;
			rear=rear%4;
			scanf("%c",&q[p]);
			p++;
			printf("%d %d\n",front,rear);
		}
		else{
			move(q);
			printf("%d %d\n",front,rear);
		}
	}
	for(int i=0,o=rear+1;i<m;i++,o++)
	{
		o=o%4;
		if(o==0);
		else
		printf("%c",q[o]);
	}
} 
