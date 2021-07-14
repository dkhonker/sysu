#include<stdio.h>

#define maxn 11
int n,T;
bool col[maxn],dplus[maxn*2+1],dminus[maxn*2+1];
void queen(int row){
	for(int i =1;i<=n;i++){
		if(!col[i]&&!dplus[i+row]&&!dminus[i-row]){
			col[i]=dplus[i+row]=dminus[i-row]=true;
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
