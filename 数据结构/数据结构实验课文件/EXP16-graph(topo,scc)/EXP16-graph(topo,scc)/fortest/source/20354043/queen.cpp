#include<stdio.h>

const int maxn = 10;
int n,T;
bool a[maxn + 1],b[maxn*2 +1],c[maxn*2 +1];

void queen(int row){
	for(int i=1;i<=n;i++)
		if(!a[i] && !b[i+row] && !c[i-row+n]){
			a[i] = b[i+row] = c[i-row+n] = true;
			if(row<n) queen(row+1);
			else T++;
			a[i] = b[i+row] = c[i-row+n] = false;
		}
}

int main(){
	int n;
	scanf("%d",&n);
	queen(1);
	printf("%d",T%10000);
	return 0;
}
