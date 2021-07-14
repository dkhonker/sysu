#include <iostream> 

int main() {
	int m,n,i;
	scanf("%d%d",&m,&n);
	getchar();
	char a[22],b[4];
	int front=0,rear=1;
	for(i=1;i<=n;i++){
		gets(b); 
		if(b[0]=='1'){
			a[rear]=b[2];
			if(rear==n)rear=1;
			else rear++;
			printf("%d %d\n",front,rear-1);
		}
		else{
			front++;
			printf("%d %d\n",front,rear-1);
		}
	} 
	
	for(i=front+1;i!=rear;){
		printf("%c",a[i]);
		if(i==n)i=1;
		else i++;
	}
	return 0;
}
