#include<stdio.h>
#include<string.h>
#include<malloc.h>
	struct row
	{
		char *base;
		int front;
		int rear;
	}SqQueue;
void InitQueue(SqQueue &Q,int m)//����һ���ն���Q 
{
	Q.base=(char*)malloc(m*sizeof(char));

	Q.front=Q.rear=0;	
}
int EnQueue(SqQueue &Q,char e,int m){
	//������Ԫ�ص���β
	if((Q.rear+1)%m==Q.front) return 0;
	Q.base[Q.rear]=e;
	Q.rear=(Q.rear+1)%m;
   printf("%d%d",Q.front,Q.rear);
	return 1;
	 
}
int DeQueue(SqQueue &Q,int m){//ɾ������ͷ����Ԫ�� �����գ�
	if(Q.front==Q.rear) return 0;

	Q.front=(Q.front+1)%m;
	printf("%d%d",Q.front,Q.rear);
	return 0;
	
}
int main()
{
	int m,n,t;
	char x[2],s;
	SqQueue *Q;
	scanf("%d%d",&m,&n);
 InitQueue(Q,m);

	for(int i=0;i<n;i++)
	{
		gets(x);
		if(strlen(x)==1)DeQueue(Q,m);
		else {s=x[1];EnQueue(Q,s,m)
		
		}
		
	}

	
}
