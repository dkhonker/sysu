#include <stdio.h>
#include <string.h>
int main()
{
	int m,n,flag,p,front=0,rear=0;
	scanf("%d %d\n",&m,&n);
	char a[m],temp;
	for(int i=1;i<n;i++)
	{
		scanf("%d %c",&p,&temp);
		if(p==1)
		{
			a[rear]=temp;
			rear++;
			printf("%d %d\n",front,rear); 
		}
		if(p==2)
		{
			printf("%d %d\n",front,rear);
		}
	}
	puts(a);
	return 0;
}
