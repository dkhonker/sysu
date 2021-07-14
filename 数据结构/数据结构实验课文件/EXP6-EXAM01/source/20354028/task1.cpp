#include<stdio.h>
char str[20];
int num=0,front=0,rear=0,m,n,arr[1000][1000],temp=0;
void in(char x)
{
	str[num]=x;
	rear++;
	if(rear>=m)
	rear=0;
	arr[temp][0]=front;
	arr[temp][1]=rear;
	temp++;
	num++;
}

void out()
{
	for(int i=0;i<num;i++)
	{
	str[i]=str[i+1];
    }
	front++;
	arr[temp][0]=front;
	arr[temp][1]=rear;
	temp++;
	num--;
}
int main()
{
int flag;
char x;
scanf("%d %d",&m,&n);
for(int i=1;i<=n;i++)
{
	scanf("%d ",&flag);
	if(flag==1)
	scanf("%c",&x);
	if(flag==1)
	{
	in(x);
    }
	else
	out();
}
for(int k=0;k<temp;k++)
printf("%d %d\n",arr[k][0],arr[k][1]);
for(int t=0;t<m-1;t++)
printf("%c",str[t]);
return 0;
} 
