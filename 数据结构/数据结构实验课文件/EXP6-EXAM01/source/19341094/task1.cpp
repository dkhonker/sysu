#include<stdio.h>


int main(){
	char a[20];
	int front=0, rear=0;
	int m, n, w, s;
	
	scanf("%d %d",&m,&n);
	for(int i; i < n; i++){
		scanf("%d", &w);
		if (w == 1){
			getchar();
			s = getchar();
			a[rear%m] = s;
			rear++;
			printf("%d %d\n",front%m,rear%m);
		}
		else if(w == 2){
			front++;
			printf("%d %d\n",front%m,rear%m);
		}
	}
	int j=front;
	for(j;j<rear;j++){
		printf("%c",a[j%m]);
	}
}
