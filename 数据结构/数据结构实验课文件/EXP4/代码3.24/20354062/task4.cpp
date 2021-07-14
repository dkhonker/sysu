#include<iostream>
#include<string.h>
#include<stdio.h>
int main(){
	char a[21];
	char s;
	int m,n,i,k,f=0,r=0;
	scanf("%d%d",&m,&n);
	
	for(i=1;i<=n;i++){
		scanf("%d",&k);
		getchar();
		if(k==1){
			scanf("%c",&s); 
			a[r]=s;
			printf("%d ",f);
			if(r<m-1)r++;
			else r=0;
			printf("%d\n",r);
		}
		else{
			f++;
			printf("%d %d\n",f,r);
		}
	}
	
	for(int j=f;a[j]!=0;j++)
		printf("%c",a[j]);
}
