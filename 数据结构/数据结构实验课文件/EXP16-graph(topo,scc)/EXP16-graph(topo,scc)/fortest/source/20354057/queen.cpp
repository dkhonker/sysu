#include <iostream>
using namespace std;
const int maxn=10;
int count=0;
int where[maxn]; //存储第k行皇后的位置 

int queen(int n,int i){
	if(i==n+1)
	{
		count++;
		return true;
	}
	else
	{
		for(int j=1;j<=n;j++)
		{
		int flag=1;
		for(int k=1;k<=i;k++)
			{printf("%d ",where[k]);
			if(j==where[k] or (i-k)==(j-where[k]) or (i-k)==-(j-where[k]))
			{
				flag=0;
		 		break;
			}
		 	} 
		printf("\n");
		//printf("%d\n",i); 	
		if(flag=1){
		where[i]=j;
		queen(n,i+1);
		where[i]=0; 
		}
		}
		return false;
	} 
}



int main(){
	int n;
	cin>>n;
	queen(n,1);
	printf("%d",count);
	return 0;
} 
