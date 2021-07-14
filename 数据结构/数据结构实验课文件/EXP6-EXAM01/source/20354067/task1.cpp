#include<stdio.h>
 int front=0,rear=0;
int m;
char str[20]={'\0'};
int main()
{
	void input(char x);
	void output();
	int n,c;
	char str;
 scanf("%d%d", &m, &n);
 
 for( int i=0;i<n;i++)
 {
 scanf("%d",&c);getchar();
		switch (c){case 1:scanf("%c",&str);input(str);break;
                   case 2:output();break;
}
 
}

}
void input(char x)
{
	if(rear==m-1)rear=0;


str[rear]=x;
	rear++;
	printf("%d %d\n",front,rear);

}
void output()
{
 char a='\0';
 str[front]=a;
	front++;
	printf("%d %d\n",front,rear);
}
