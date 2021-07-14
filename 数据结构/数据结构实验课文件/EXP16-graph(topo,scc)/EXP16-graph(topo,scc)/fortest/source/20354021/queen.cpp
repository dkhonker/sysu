#include <stdio.h>
const int max=11;
int n;
int Board[max][max];
int t=0;

int Checkone(int r, int c)
{
	for(int row=1;row<=n;row++)
	{
		if(row==r)continue;
		else if(Board[row][c])return 0;
	}
	int row,col;
	row=r+1;col=c+1;
	while(row<=n && col<=n && row>=1 && col>=1)
	{
		if(Board[row][col])return 0;
		else 
		{
			row++;col++;
		}
	}
	row=r-1;col=c-1;
	while(row<=n && col<=n && row>=1 && col>=1)
	{
		if(Board[row][col])return 0;
		else 
		{
			row--;col--;
		}
	}
	row=r-1;col=c+1;
	while(row<=n && col<=n && row>=1 && col>=1)
	{
		if(Board[row][col])return 0;
		else 
		{
			row--;col++;
		}
	}
	row=r+1;col=c-1;
	while(row<=n && col<=n && row>=1 && col>=1)
	{
		if(Board[row][col])return 0;
		else 
		{
			row++;col--;
		}
	}
	return 1;
}

int Check(int c)
{
	for(int i=1;i<=c;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(Board[i][j])
				if(!Checkone(i, j))return 0;
		}
	}
	return 1;
}

void Trial(int i, int n)
{
	if(i>n)
	{
		t++;	
	}
	else
	{
		for(int j=1;j<=n;j++)
		{
			Board[i][j]=1;
			if(Check(i))Trial(i+1, n);
			Board[i][j]=0;
		}
	}
}

int main()
{
	scanf("%d", &n);
	Trial(1, n);
	printf("%d", t%10000);
	return 0;
}
