#include <stdio.h>
#include <string.h>
int Substring(int a,int b,char c[],char d[])
{
	int i;
	if (a+b>strlen(c))	
		return -1;
	for(i=0;i<b;i++)
		{
		d[i]=c[a+i-1];
		}
	d[i]='\0';
	return 0;
}


 int main(){
 	int a,b;
 	char c[20001],d[20001];
 	scanf("%d %d",&a,&b);
 	scanf("%s",&c);
 	Substring(a,b,c,d);
 	puts(d);
 	return 0;
 }
