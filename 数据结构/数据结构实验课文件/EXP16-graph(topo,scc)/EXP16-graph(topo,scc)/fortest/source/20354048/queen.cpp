#include<stdio.h>
#include<memory.h>
#include<stdlib.h>
int n,*col,*add,*zheng,*fu;
int count=0;

void trial(int i,int n){
	if(i<=n){
		for(int j=1;j<=n;j++){
			if(col[j]==0&&add[i+j]==0){
				if(i>=j&&zheng[i-j]==0){
					col[j]=1;
					add[i+j]=1;
					zheng[i-j]=1;
					trial(i+1,n);
					col[j]=0;
					add[i+j]=0;
					zheng[i-j]=0;
				}
				else if(i<j&&fu[j-i]==0){
					col[j]=1;
					add[i+j]=1;
					fu[j-i]=1;
					trial(i+1,n);
					col[j]=0;
					add[i+j]=0;
					fu[j-i]=0;
				}
			}
		}
	}
	else{
		count++;
	}
} 


int main(){
	scanf("%d",&n);
	col=(int*)malloc(sizeof(int)*(n+1));
	add=(int*)malloc(sizeof(int)*(2*n+1));
	zheng=(int*)malloc(sizeof(int)*n);
	fu=(int*)malloc(sizeof(int)*n);
	memset(col,0,sizeof(int)*(n+1));
	memset(add,0,sizeof(int)*(2*n+1));
	memset(zheng,0,sizeof(int)*n);
	memset(fu,0,sizeof(int)*n);
	trial(1,n);
	printf("%d",count%10000);
	return 0;
} 
