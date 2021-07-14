#include <stdio.h>
#include<string.h> 
int main(){
	int front=0,rear=0;
	int m,n,k;
	char h;
	int s=0;
	int i=0;
	scanf("%d%d",&m,&n);
	char c[m];
	for(i=0;i<n;i++){
		scanf("%d",&k);
		scanf("%c",&h);
		switch(k){
			case 1: c[rear++]=h;s++;
			case 2: c[front++]='\0';s--;
		}
		if(rear==4) rear=0;
		if(front==4) front=0;		
		printf("%d %d\n",front,rear);
	}
	if(front+s<=m) {
		for(i=front;i<=front+s-1;i++) printf("%c",c[i]);
	}
	else{
		for(i=front;i<=m-1;i++) printf("%c",c[i]);
		front=0;
		for(i=front;i<=s-m+front;i++) printf("%c",c[i]);
	}
	return 0;
}
	
