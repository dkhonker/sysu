#include<stdio.h>

const int maxn=10;
int n,T;
bool col[maxn+1],dplus[maxn*2+1],dminus[maxn*2+1];
void queen(int row)
{
	for(int i=1;i<=n;i++)
		if(!col[i]&&!dplus[i+row]&&!dminus[i-row+n])
		{
			
		}
}
