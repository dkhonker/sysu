#include<stdio.h>
int main()
{int m,n;
scanf("%d%d",&m,&n);
getchar();
char q[m];
int c[50],d[50];

int front=0;
int rear=0;

for(int i=0;i<n;i++)
{char a[10];
gets(a);
if(a[0]='1')
{q[rear]=a[2];
rear=(rear+1)%m;
c[i]=0;d[i]=rear;}

else {front=(front+1)%m;
c[i]=front;d[i]=0;
}


}


for(int i=0;i<n;i++)
printf("%d%d\n",c[i],d[i]);
while(front!=rear)
{printf("%c",q[front]);
front=(front+1)%m;}

return 0;
}


