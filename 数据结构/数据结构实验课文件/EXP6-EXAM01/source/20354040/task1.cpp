#include<stdio.h>
 
 void inorout(int m,int n)
 {
 	int front,rear;
 	front = 0;
 	rear = 0;
	char que[m];
	int num=0;
 	for(int i=0;i<n;i++)
 	{
 		int order;
 		char x;
 		scanf("%d",&order);
 		if(order==1&&num<=(m-1))
 		{
 			getchar();
 			scanf("%c",&x);
 			que[rear]=x;
 			if(rear==3)
				rear=0;
			else rear++;
			num++;
			printf("%d %d\n",front,rear);
		 }
		if(order==2)
		 {
		 	que[front]='\0';
		 	if(front==2)
				front=0;
			else front++;
			num--;
			printf("%d %d\n",front,rear);
			
		 }
	 }
	 for(int i=front,count=0;;i++,count++)
	 {
	 	if(i==m)
	 		i=0;
	 	
	 	printf("%c",que[i]);
		if(count==num)
			break;	 	
	 }
 }
 
 
 
 int main()
 {
 	int m,n;
 	scanf("%d %d",&m,&n);
 	inorout(m,n);
 	return 0;
 }
