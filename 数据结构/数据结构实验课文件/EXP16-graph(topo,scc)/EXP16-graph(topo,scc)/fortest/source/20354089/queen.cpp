#include<stdio.h>
const int max=10;
int n,T;
bool col[max+1],dplus[max*2+1],dminus[max*2+1];

void queen(int row)
{
	for(int i=1;i<=n;i++)
	{
		if(!col[i]&&!dplus[i+row]&&!dminus[i-row+n])
		{
			col[i]=dplus[i+row]=dminus[i-row+n]=true;
			if(row<n)queen(row+1);
			else T++;
			col[i]=dplus[i+row]=dminus[i-row+n]=false;
		}
	}
}

int main()
{
	scanf("%d",&n);
	queen(1);
	printf("%d",T%10000);
	return 0;
}
