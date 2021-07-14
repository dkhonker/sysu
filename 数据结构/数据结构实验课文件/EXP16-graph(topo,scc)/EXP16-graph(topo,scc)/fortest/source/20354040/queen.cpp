#include<stdio.h>
#define MAXN 11
int board[MAXN];//下标为行数y，储存的是列数x 
int count=0;
void Trial(int i,int n)
{
	if(i>n)
	{
		count++;
		return;
	}
	else
	{
		for(int j=1;j<=n;j++)
		{
			bool flag=true;
			for(int k=1;k<=i-1;k++)
				if((k+board[k]==i+j)||(k-board[k]==i-j)||board[k]==j)
				{
					flag=false;
					break;
				}
			if(flag)
			{
				board[i]=j;
				Trial(i+1,n);
			}
			board[i]=0;
		}
	}
}

int main()
{
	int n,t;
	scanf("%d",&n);
	Trial(1,n);
	t=count%10000;
	printf("%d",t);
}
