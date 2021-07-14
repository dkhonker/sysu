#include <stdio.h>

int main()
{
	int m,n,x,i=0;
	char a[m],b[1];
	scanf("%d %d",&m,&n);
	for(;n>0;n--)
	{
		scanf("%d %c",&x,b);
		if(x==1) 
		{
			a[i]=b[0]; 
			i++; 
			printf("0 %d",i);
		}
		if(x==2) 
		{
			for(int j=i;j>0;j--) a[j-1]=a[j];
			i--;
			printf("1 %d",i);
		}
		
	}
	printf("%s",a);
	return 0;
}
