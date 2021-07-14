#include <stdio.h>
#include <stdlib.h>

int maxn=20001;
 
int main() {
	char a[maxn];
	char c[maxn];
	int pos,len;
  scanf("%d%d",&pos,&len);
	gets(a);
	int i=0;
	for (i=0;i<len;i++)
	{
	   c[i]=a[pos-1];
	   pos++;
}
  c[i]='\0'; 
   puts(c);
	return 0;

}
