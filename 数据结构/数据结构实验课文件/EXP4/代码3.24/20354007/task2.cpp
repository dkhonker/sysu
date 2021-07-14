#include <stdio.h>
#include<string.h>
int main(){
	char a[20001],b[20001];
	scanf("%s",a);
	scanf("%s",b);
	int c=0,i=0; 
	for(;i<strlen(a)&&i<strlen(b);i++){
		if(a[i]!=b[i]){
		c=a[i]-b[i];
		break;
	}
	}
	if(c>0)
	printf("%d",1);
	else if(c<0)
	printf("%d",-1);
	else{
		c=a[i]-b[i];
		if(c>0)printf("%d",1);
		else if(c<0)printf("%d",-1);
		else printf("%d",0);
	}
	
}
