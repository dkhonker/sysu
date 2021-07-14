#include<stdio.h>
#include<string.h>
int main(){
	int m,n;
	char a[5];
	int front = 0;//头
	int rear = 0;//尾
	
	//输入 
	scanf("%d",&m);
	scanf("%d",&n);
	getchar();
	char b[500];
	for(int i = 0;i<n;i++) 
	{	

		gets(a);
		if(a[0]=='1'){//表示输入 ，尾向后移动 
			b[rear] = a[2];
			rear = (rear+1)%m;
		}
		if(a[0]=='2'){//表示输出，头向后移动 
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
