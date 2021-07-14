#include<stdio.h>
#include<string.h>
int main()
{ int pos;int len;
  char a[20000];char b[20000];
  scanf("%d",&pos);
  scanf("%d",&len);
  getchar();
  gets(a);
  int i=pos-1;
  int j=0;
  
  if(len>strlen(a)-pos+1&&len<0){ printf("wrong!\n");}
  while(i<pos+len&&j<len) {b[j++]=a[i++];}
  b[j]='\0';
  puts(b);
}
