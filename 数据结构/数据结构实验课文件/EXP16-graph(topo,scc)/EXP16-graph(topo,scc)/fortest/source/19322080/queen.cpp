#include<stdio.h>
#define MAX 11
int n,sum,q[MAX][MAX];
int judge(int x,int y){
	for(int i=1;i<x;i++){
		if(q[i][y]){
			return 0;
		}
	}
	for(int i=1;x-i>0&&y-i>0;i++){
		if(q[x-i][y-i]){
			return 0;
		}
	}
	for(int i=1;x-i>0&&y+i<=n;i++){
		if(q[x-i][y+i]){
			return 0;
		}
	}
	return 1;
}
void queen(int k){
	if(k==n+1){
		sum++;
		return;
	}
	for(int i=1;i<=n;i++){
		q[k][i]=1;
		if(judge(k,i)){
			queen(k+1);
		}
		q[k][i]=0;
	}
}
int main(){
	scanf("%d",&n);
	queen(1);
	printf("%d",sum%10000);
	return 0;
} 
