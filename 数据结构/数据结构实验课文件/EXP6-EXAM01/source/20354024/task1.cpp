#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m,n;
	int q,w;
	int front,rear;
	scanf("%d%d",&m,&n);
	char a[m];
	front=0;rear=0;w=0;
	for (int i=0;i<n;i++)
	{
		scanf("%d",&q);
		if (q==1)
		{
			if(w==m-1)
			break;
			else 
			{
				scanf("%s",&a[rear]);
				rear=(rear+1)%m;
				w=w+1;
			}
		}
		else 
		{
			if(w==0) break;
			else{a[front]='NULL';
			w=w-1;
			front=(front+1)%m;}
		}
	}
	int i,o;
	for (int i =front,o=0; o<w; i=(i+1)%m,o++)
	printf("%c",a[i]);
}

