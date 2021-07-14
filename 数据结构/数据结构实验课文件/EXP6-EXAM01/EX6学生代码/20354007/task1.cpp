#include<stdio.h>
#include<string.h>
int main(){
	int m,n,i,j,k,b[100],front=0,rear=0;
	char s[100],s2[100];
	scanf("%d %d",&m,&n);
	for(i=0;i<n;i++){
    scanf("%d %c",&b[i],&s[i]);
	}
	s[i]=0;
	for(i=0,j=0,k=0;i<n;){
			if(s[i]==1){
				s2[j%(m-1)]=s[i];
				rear=(j+1)%m;
				printf("%d %d\n",front,rear);
				i++;j++;
			}
			else{
				s[front]='1';
				front=(front+1)%(m-1);
				printf("%d %d\n",front,rear);
				i++;
			}
		}
	for(i=0;s[i]!='1';i++){
	printf("%c",s[i]);
	}
	return 0;
} 
