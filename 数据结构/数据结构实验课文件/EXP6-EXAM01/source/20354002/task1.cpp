# include <stdio.h>
int m,n,front=0,rear=0,flag;
char a[10000], x;
	

int main()
{
    scanf("%d",&m);
	scanf("%d",&n);
	getchar();

	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&flag);
	    
		if(flag==1)
		{	scanf("%c",&x);
		    getchar();
			a[rear]=x;
			rear=rear+1;
			if(rear==m)
			rear=0;
			printf("%d %d\n",front,rear);
		}
	
		if(flag==2)
		{
			front=front+1;
			printf("%d %d\n",front,rear);
		}	
		
	}
	
		if(front<rear)
		{
			for(int i=front;i<rear;i++)
			printf("%c",a[i]);
	    }
	    
		if(front>rear)
		{
	    	for(int i=front;i<m-1;i++)
				{printf("%c",a[i]);}
		
			for(int i=0;i<rear;i++)
			{printf("%c",a[i]);}
			
		}
	return 0;
} 
