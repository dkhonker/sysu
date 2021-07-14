#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef int QelemType;
typedef struct{
	QelemType *base;
	int front;
	int rear;
}squene;
void Initquene(squene &s){
	s.base=(QelemType *)malloc(MAXSIZE * sizeof(QelemType));
	if(!s.base)
	exit(-1);
	s.front=0;
	s.rear=0;
}
void enquene(squene &s,QelemType e){
	if((s.rear+1)%MAXSIZE==s.front){
		printf("¶ÓÂú");
		exit(0);
	}
	s.base[s.rear]=e; 
	s.rear=(s.rear+1)%MAXSIZE;
	if (s.rear==4)
	s.rear=0;
}
void dequene(squene &s,QelemType e){
	int x;
	if(s.rear==s.front){
	printf("Õ»¿Õ");
	exit(-1);
	}
	e=s.base[s.front];
	s.front=(s.front+1)  % MAXSIZE;
}



int main()
{
	squene s;
	Initquene(s);
	int m,n,i,x,y,e=1;
	scanf("%d %d",&m,&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		if(x==1)
		{
		enquene(s,y);
		scanf("%s",&y);
	    }
		else if(x==2)
		{
		dequene(s,e);
		}
		printf("%d %d",s.front,s.rear);
	}

	return 0;
}

