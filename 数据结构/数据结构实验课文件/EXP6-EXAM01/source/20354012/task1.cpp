#include<stdio.h>
#include<string.h>
int main(){
	int m,n;
	char a[5];
	int front = 0;//ͷ
	int rear = 0;//β
	
	//���� 
	scanf("%d",&m);
	scanf("%d",&n);
	getchar();
	char b[500];
	for(int i = 0;i<n;i++) 
	{	

		gets(a);
		if(a[0]=='1'){//��ʾ���� ��β����ƶ� 
			b[rear] = a[2];
			rear = (rear+1)%m;
		}
		if(a[0]=='2'){//��ʾ�����ͷ����ƶ� 
			front = (front+1)%m;
		}
		printf("%d %d\n", front, rear); 
	} 
	while(front != rear)
	{
		printf("%c",b[front]) ;
		front = (front+1)%m;
	}
	return 0;
} 
