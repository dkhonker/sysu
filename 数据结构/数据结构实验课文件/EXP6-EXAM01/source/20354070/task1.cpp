#include <stdio.h>
#include <stdlib.h>
#include <string>
int main()
{
	int m,n,i,j,k,l,b;
	char str[20];
	char p;
	scanf("%d %d",&m,&n);
	int front ,rear;
	front=0;
	rear=0;
	b=0;
	for(i=0;i<n;i++)
	{
		scanf("%d %c",&j,&p);
		if(j==1)
		{
			str[b]=p;
			rear++;
		}
		if(j==2)
		{
			for(l=0;l<b-1;l++)
			{
				str[l]=str[l+1];
			}
			str[l]='\0';
			front++;
			b=b-2;
		}
		if(rear>m-1)
		{
		    rear=0;
		}
		printf("%d %d\n",front,rear);
		b++;
	}
    printf("%s",str);
}
