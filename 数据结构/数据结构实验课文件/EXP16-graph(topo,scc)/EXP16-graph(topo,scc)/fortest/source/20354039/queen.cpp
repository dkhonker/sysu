#include<stdio.h>
int num=0;
int s[11][11];
int p;
void queen(int i ,int n){
	if(i>n) {
		num++;
	}
	else{
		for(int j=1;j<=n;j++){
			s[i][j]=1;
			p=0;
			for(int k=1;k<=n;k++){
				p+=s[i][k];
			}
			for(int k=1;k<=n;k++){
				p+=s[k][j];
			}
			for(int k=i,f=j;k>=1&&f>=1&&k<=n&&f<=n;k++,f--){
				p+=s[k][f];
			}
			for(int k=i,f=j;k>=1&&f>=1&&k<=n&&f<=n;k--,f--){
				p+=s[k][f];
			}
			for(int k=i,f=j;k>=1&&f>=1&&k<=n&&f<=n;k++,f++){
				p+=s[k][f];
			}
			for(int k=i,f=j;k>=1&&f>=1&&k<=n&&f<=n;k--,f++){
				p+=s[k][f];
			}
			p=p-6;
			if(p==0){
				queen(i+1,n);
			}
			s[i][j]=0;
		}
	}
}
main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			s[i][j]=0;
		}
	}
	queen(1,n);
	printf("%d",num%10000);
} 
