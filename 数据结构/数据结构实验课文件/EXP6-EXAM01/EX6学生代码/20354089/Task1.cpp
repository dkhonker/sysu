#include<stdio.h>
int main()
{
	int m,n,i;
	int front=0,rear=0;
	int j=0,l=0;
	scanf("%d %d",&m,&n);
	char str[m-1];
	char k1[n-1];
	char k2[n-1];
	for(i=0;i<n;i++)
	{
		int a;
		char b; 
		scanf("%d %s",&a,&b);
		printf("%d %s",a,b);
		if (a==1)
		{
			str[rear]=b;
			rear++;
			k2[j]=rear;
			j++;
		}
		if (a==2)
		{
			str[front]='\0';
			front++;
			k1[l]=front;
			l++;
		}
		if(rear==m-1)
		rear=0;
	}
	for(i=0;i<n;i++)
	{
		printf("%d %d\n",k1[i],k2[i]);
	};
	printf("%s\n",k1);
	printf("1\n");
	printf("%s\n",k2);
	printf("1\n");
	printf("%s\n",str);
	return 0; 
}
