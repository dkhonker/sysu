#include<stdio.h>
char string[20];
int front=0;
int rear=0;
int m,n;
int op[100];
char c[100];
int main()
{
	int en_queue(char);
	int de_queue(char);
	scanf("%d %d",&m,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&op[i]);
		getchar();
		scanf("%c",&c[i]);
	    //printf("%d,%c",op,c);
    }
    for(int i=0;i<n;i++)
    {
	
		switch (op[i])
	{
		case 1:
		en_queue(c[i]);printf("%d %d\n",front,rear);break;
		case 2: 
		de_queue(c[i]);printf("%d %d\n",front,rear);break;
	}
	}
	
for(int i=front;i<front+n;i++){

printf("%c",string[i]);
}
 } 
int en_queue(char c)
 {
 	if((rear+1%m)==front) return -1;
 	string[rear]=c;
 	rear= (rear+1)%m;
 }
int de_queue(char c)
{
	if(rear==front) return -1;
	string[front]='\0';
	front=(front+1)%m;
}
