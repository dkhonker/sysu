#include <stdio.h>
#include <string.h>

int front=0,rear=1;
void in(int a,int b,char c[],char d[]){
 	if ((rear+1)%a!=front)
	{
	c[rear]=d[2];
	rear=(rear+1)%a;
 	}
 }
 
void out(int a){
	front=(front+1)%a;
}
 
void print(char c[],int a){
	for(int j=(front+1)%a;j!=(rear+1)%a;j++)
		printf("%s",c[j]);
}

int main(){
int a,b,i,k;
int const w=a-1;
 	char d[3];
 	scanf("%d %d",&a,&b);
 	char c[w];
 	printf("%d %d\n",front,rear);
 	for(i=0;i<b;i++)
 		{
 			
 			scanf("%s",d);
 			if (d[0]=='1')
 				{
				 in(a,b,c,d);
				 printf("%d %d\n",front,rear);
 			}
			 else if (d[0]=='2')
			 	{
				out(a);
				printf("%d %d\n",front,rear);
				 }
			
		 }
	print(c,a);
 	return 0;
 }
 

