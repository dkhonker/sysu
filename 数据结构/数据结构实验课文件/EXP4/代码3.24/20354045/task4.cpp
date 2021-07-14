#include<stdio.h>
#include<string.h>
#define Max = 20
int main()
{
	int m,n,i=0;
	char a[m-1];
	scanf("%d,%d\n",&m,&n);
	if(m>=2&&m<=20)
	{
		while(i<n)
		{   int t,k=0;
			scanf("%d \n",&t);
			if(t=1)
			{
				char x;     //ÊäÈë×Ö·û 
				scanf("%c \n",x);
				a[k]=x;
				k++;
			}
			else 
			{
				printf("%c\n",a[0]);
				for(int j=0;j<k;j++)
				{
					a[j]=a[j+1];
				}
				k--;
			}
		}
	}
	else printf("m is wrong\n");
	return 0;
 } 
