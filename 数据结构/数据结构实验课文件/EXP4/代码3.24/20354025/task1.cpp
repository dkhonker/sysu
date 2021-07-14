#include <stdio.h>
#include"string.h"
int main()
{
char a[20001];
char b[20001];
scanf("%s",a);
scanf("%s",b);
char c[40002];
int i=0,j=0;
while(a[i]!='\0')
{c[i]=a[i];
 i++;
}
while(b[j]!='\0')
{c[i]=b[j];
 i++;
 j++;
}
c[i]='\0';
printf("%s",c);
return 0;
} 

