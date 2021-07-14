#include<stdio.h>
int main()
{
	int m,n,k,front=0,rear=0,i;
	char p,s[20000];
	scanf("%d%d",&m,&n);
	for (i=0;i<n;i++)
	{
	scanf("%d%c",&k,&p);
	switch(k)
	{
		case 1:front++;
		break;
		case 2:rear++;rear=(rear+1)%m;
		break;
			
		
	}
	s[i]=p;
	printf("%d%d",rear,front);
	
}
puts(s);
return 0;
}
