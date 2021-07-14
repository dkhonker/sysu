#include<stdio.h>
int n,t=0;
int lines[11]; 
int good(int x,int y){
	int flag=1;
	for(int k=1;k<y;k++){
		if(lines[k]==y){
			flag=0;
			break;
		}
		if(lines[k]+k==x+y){
			flag=0;
			break;
		}
	}
	
	return flag;
}
void queen(int i,int n){
	if(i>n){
		return;
	}
	else{
		for(int j=1;j<=n;j++){
			if(good(i,j)){
				if(i==n)t++;
				lines[i]=j;
				queen(i+1,n);
				lines[i]=0;
				
			}
		}
	}
}

int main(){
	scanf("%d",&n);
	queen(1,n);
	printf("%d",t%10000);
	return 0;
}
