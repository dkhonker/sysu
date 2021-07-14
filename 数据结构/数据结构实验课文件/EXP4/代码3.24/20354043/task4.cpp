#include <stdio.h>
int main(){
	int m,n,i;
	int front=0;
	int rear=0;	
	scanf("%d %d\n",&m,&n);
	char str[100];
	while(n>0){
		n--;
		char s[3];
		gets(s);
		if(s[0]=='1'){
			str[rear]=s[2];
			rear++;
		}
		if(s[0]=='2'){
			front++;
		}
		if(rear==(front+n))rear=0;
		printf("%d %d\n",front,rear);
	}
	for(i=front;i<m;i++)
	printf("%c",str[i]);
	return 0;
}
