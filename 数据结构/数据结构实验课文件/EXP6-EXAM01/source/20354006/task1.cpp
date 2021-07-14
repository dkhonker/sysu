#include<stdio.h>
#include<stdlib.h>
int m;
typedef int QelemType;
typedef struct{
	QelemType *base;
	int front;
	int rear;
}squene;
void Initquene(squene &s){
	s.base=(QelemType *)malloc(m * sizeof(QelemType));
	if(!s.base)
	exit(-1);
	s.front=0;
	s.rear=0;
}
void enquene(squene &s,QelemType e){
	if((s.rear+1)%m==s.front){
		printf("duimanb");
		exit(0);
	}
	s.base[s.rear]=e;
	s.rear=(s.rear+1)%m;
}
void dequene(squene &s,QelemType e){
	if(s.rear==s.front){
	printf("Õ»¿Õ");
	exit(-1);
	}
	e=s.base[s.front];
	s.front=(s.front+1)  % m;
}
int length(squene s){
	return (s.rear-s.front+m) % m;
}
void PrintQuence(squene Q) {
    int i;
    i = (Q.front) % m;
    while (i != Q.rear) {
        printf("%c", Q.base[i]);
        i = (i + 1) % m;
    }
    printf("\n");
}
int main(){
	squene s;
	Initquene(s);
	int n,i,x,y,e=1;
	scanf("%d %d",&m,&n);
	getchar();
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		getchar();
		if(x==1)
		{
		scanf("%c",&y);
		enquene(s,y);
	}
		if(x==2)
		dequene(s,e);
		printf("%d %d\n",s.front,s.rear);
	}
	PrintQuence(s);
	return 0;
}
