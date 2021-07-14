# include<stdio.h>
int m,n,front=0,rear=0,flag;
char s[101],a;

int main()
{
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&m,&n);
		scanf("%d &c",&flag,&a);
		if(flag==1);
		{
			s[rear]=a;
			rear=rear+1;
			printf("%d %c",flag,a)	
		}
		
		if(flag==2)
		{
			front=front+1;
			printf("%d %c",flag,a)	
		}
	}
	
	for(int i=front;i<rear;i++)
	printf("%d",s[i]);
	return 0;
	
}
