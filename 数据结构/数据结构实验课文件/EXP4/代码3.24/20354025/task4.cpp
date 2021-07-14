#include<stdio.h>
int main()
{
int m,n;
int front=0,rear=0;
scanf("%d",&m,&n);
char a[m];
int b[n];
for(int i=0;i<n;i++)
{scanf("%d%c",b[i],a[i]);
if(b[i]==1)rear++;
if(b[i]==2){
int j=0;
while(a[j]!='\0'){a[j]=a[j+1];front++;
}
}
}
printf("%s",a);
}
