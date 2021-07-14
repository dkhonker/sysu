#include <stdio.h>
int main()
{
	int m,n,front=0,rear=0,len=0,c;
	char x,a[21];
	scanf("%d%d",&m,&n);
	getchar();
	for(int i=0;i<n;i++){
		scanf("%d",&c);
		if(c==1){
			scanf(" ");
			scanf("%c",&x);a[rear]=x;
			if(rear==m-1){
				rear=0;
			}
			else rear++;
			printf("%d %d\n",front,rear);
			len++;
		}
		if(c==2){
			if(front==m-1){
				front=0;
			}
			else {
			front++;
		    }
			printf("%d %d\n",front,rear);
			len--;
		}
	}
	if(front<rear){
		for(int i=front;i<=len+front;i++){
			printf("%c",a[i]);
		}
	}
	else{
		if(len!=0){
			for(int i=front;i<m;i++){
				printf("%c",a[i]);
			}
			for(int i=0;i<rear;i++){
				printf("%c",a[i]);
			}
		}
	}
	return 0;
}
