#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct Queue{
int *pBase;
int front;
int rear;
};
void init(Queue *pQ,int val,int m){
	pQ->pBase=(int*)malloc(sizeof(int)*m);
	pQ->front=0;
	pQ->rear=0;
}
void Insert(Queue *pQ,char val,int m){
	pQ->pBase[pQ->rear]=val;
	pQ->rear=(pQ->rear+1)%m;
}
void show(Queue *pQ,int m){
	int i=pQ->front;
	while (i!=pQ->rear){
		i=(i+1)%m;
	}
}
void outline(Queue *pQ,int *pVal,int m){
	*pVal=pQ->pBase[pQ->front];
	pQ->front=(pQ->front+1)%m;
}
int main(){
	Queue Q;
	int val;
	int m,n;
	char w;
	scanf("%d %d",&m,&n);
	printf("%d%d\n",m,n);
	int i=0,j,front,rear;
	for(i=0;i<n;i++)
	{
		scanf("%d%c",&j,&w);
		if(j==1)
		{
			Insert(&Q,w,m);
		}
		if(j==2){
			outline(&Q,&val,m);
		} 
		printf("%d%d",rear,front);
	}
	show(&Q,m);
}
