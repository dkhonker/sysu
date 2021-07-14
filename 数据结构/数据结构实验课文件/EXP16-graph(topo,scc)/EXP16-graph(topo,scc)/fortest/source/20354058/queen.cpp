#include <stdio.h>
const int MAX=10001;
int n,T;
bool col[MAX+1],dplus[MAX*2+1],dminus[MAX*2+1];

void queen(int row){
	for(int i=1;i<=n;i++){
		if(!col[i] && !dplus[i+row] && !dminus[i-row+n]){
			col[i]=dplus[i+row]=dminus[i-row+n]=true;
			if(row<n) queen(row+1);
			else T++;
			col[i]=dplus[i+row]=dminus[i-row+n]=false;
		}
	}
}

int main() {
    scanf("%d",&n);
    queen(1);
    printf("%d",T%10000);
    return 0;
}
