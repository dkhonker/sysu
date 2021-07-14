#include<stdio.h>
int chess[11][11],count=0;
int col[21],dplus[21],dminus[21];
void Trial(int i,int n){
	if(i>n) count++;
	else{
		for(int j=1;j<=n;j++){
			chess[i][j]=1;
			int flag=1;
			if(!col[j] && !dplus[j+i] &&!dminus[j-i+n]){
				col[j]=dplus[j+i]=dminus[j-i+n]=1;
				Trial(i+1,n);
			}
			chess[i][j]=0;
		}
	}
} 

int main(){
	int n;
	scanf("%d",&n);
	Trial(1,n);
	printf("%d",count%10000);
	return 0;
}
