#include<stdio.h>
#include<string.h>
int front=0,rear=0;
int m,n;
void input(char c,char a[]){
	a[rear%m]=c;
	rear=(rear+1)%m;
}
void output(char a[]){
	a[front%m]='\0';
	front=(front+1)%m;
}

int main(){
	void input(char c,char a[]);
	void output(char a[]);
	int i,o;
	char c;
	scanf("%d %d",&n,&m);
	char a[m];
	for(i=1;i<=n+1;i++){
		scanf("%d",&o);
		if(o==1)
		{scanf("%s",&c);
		input(c,a);}
		else output(a);
		printf("%d %d\n",front,rear);
	}
	for (rear;front%m!=rear;front++)
	printf("%c",a[front%m]);
	return 0;
}
