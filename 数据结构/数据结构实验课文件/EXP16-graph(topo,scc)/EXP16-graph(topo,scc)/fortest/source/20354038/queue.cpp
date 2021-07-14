#include<stdio.h>
#include<memory.h>
#define Maxn 100

int n, count;
int ch[Maxn][Maxn];

bool is(int x, int i, int j)
{
	for(int k = 1; k <= i; k++)
	{
		if(x == ch[k][j])
			return false;
	}
	fo(int k = 1; k <= j; k++)
	{
		if(x == ch[i][k])
			return false;
	}
	for(int k = i; k >= 1; k--)
	{
		if(x == ch[k][k])
	}
}

bool is(int x, int i, int j, int k)
{
	if(x == ch[i - 1][j])
		return false;
	if(x == ch[i -1][j - k] && j - k >= 1)
		return false;
	if(x == ch[i - 1][j + k] && j + k <= n)
		return false;
	if(i - 1 >= 2)
		is(x, i - 1, j, k++);
	return true;
}

void trail(int i)
{
	if(i > n)
		printf("%d",count);
	else
	{
		int j;
		for(j = 1; j <= n; j++)
		{
			ch[i][j] = 1;
			if(is(ch[i][j], i, j, 1) && i + 1 <= n)
				trail(i + 1)£»
			ch[i][j] = 0; 
		}
		if(j == n)
			count++;
	}
}

int main()
{
	scanf("%d",&n);
	
	memset(ch,0,sizeof(ch));
	
	trail(1);
	
	return 0;
}
