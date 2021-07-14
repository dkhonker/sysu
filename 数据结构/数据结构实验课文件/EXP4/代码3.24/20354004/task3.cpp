#include<stdio.h>
#include<string.h> 
int main()
{char a[20000];
int pos,len;
scanf("%d%d",&pos,&len);
scanf("%s",&a);
for(int i=0;i<len;i++)
printf("%c",a[pos-1+i]);
return 0;
}
  
