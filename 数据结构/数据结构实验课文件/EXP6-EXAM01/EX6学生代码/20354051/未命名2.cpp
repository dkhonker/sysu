

#include <stdio.h>
#include <stdlib.h>for(;i<m+1;i++)
int main(){
	char q[5]={'\0','b','c','d','e'};
	int i=1;
	
	for(;i<5;i++)
	q[i]=q[i+1];
	for(int a=0;a<5;a++)
	printf("%c",q[a]);
}
	
	
