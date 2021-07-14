#include <stdio.h>
int n,T;
bool col[11],dplus[21],dminus[21];

void queen(int row)
{
	for(int i=1;i<n+1;i++)
	{
		if(!col[i]&&!dplus[i+row]&&!dminus[i-row+n])
		{
			col[i]=dplus[i+row]=dminus[i-row+n]=true;
			if(row<n) queen(row+1);
			else T++;
			col[i]=dplus[i+row]=dminus[i-row+n]=false;
		}
	}
}


int main(){
	scanf("%d",&n);
	queen(1);
	printf("%d",T%10000);
	return 0;
} 

