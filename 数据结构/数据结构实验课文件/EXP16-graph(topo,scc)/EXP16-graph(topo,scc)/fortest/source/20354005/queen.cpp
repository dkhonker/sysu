#include <iostream>
#include<memory.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int *a[11];
int count=0;
void Trial(int i,int n)
{
	if(i>n)   
	{
		count++;
	}
	else
	{
		for(int j=1;j<=n;j++)
		{
			if(i==1)  
			{
				a[i][j]=1;
				Trial(i+1,n);
				a[i][j]=0;
			}
			else
			{
				int w=1;
				int l=j-1,r=j+1;
				for(int k=i-1;k>=1;)
				{
					if(l>=1&&a[k][l]==1)   {
						w=0;
						break;
					}
					if(r<=n&&a[k][r]==1)
					{
						w=0;
						break;
					}
					if(a[k][j]==1)   {
						w=0;
						break;
					}
					l--;
					r++;
					k--;
				}
					if(w==1)   
				{
					a[i][j]=1;
					Trial(i+1,n);
					a[i][j]=0;
				}
			}
		}
	}
}
int main(int argc, char** argv) {
	int n;
	
	scanf("%d",&n);
	for(int i=0;i<=10;i++)
	{
		a[i]=(int*)malloc(sizeof(int)*(11));
		for(int j=0;j<=10;j++)
		{
			a[i][j]=0;
		}
	}
	Trial(1,n);
	printf("%d",count%10000);
	return 0;
}
