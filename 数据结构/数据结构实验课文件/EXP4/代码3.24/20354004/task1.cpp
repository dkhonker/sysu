#include<stdio.h>
int main()
{char a[20000],b[20000],c[40000];
scanf("%s",&a);
scanf("%s",&b);
int i=0,j=0,len1,len2;
while(a[i]!='\0')
{i=i+1;}
len1=i;
while(b[j]!='\0')
{j=j+1;}
len2=j;
for(i=0;i<len1;i++)
c[i]=a[i];
for(j=0;j<len2;j++)
c[i+j]=b[j];
printf("%s",c);
return 0;
}
  
