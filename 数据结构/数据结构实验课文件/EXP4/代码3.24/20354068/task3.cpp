#include<stdio.h>
 #include<string.h>
 char a[20001]; 
 char b[20001]; 
 int pos;
 int len;
 int main()
 {
 	gets(a);
 	scanf("%d%d",&pos,&len);
 	for(int i = pos-1;i < pos + len - 1;i++)
 	b[i-pos+1] = a[i];
 	puts(b);
 	return 0;
  } 
