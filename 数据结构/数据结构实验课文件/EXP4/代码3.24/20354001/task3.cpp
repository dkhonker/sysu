#include<stdio.h>
#include<string.h>
int main()
{
	char a[20000];
	char b[20001];
	int pos ,len;
	//scanf("%s",&a);
	scanf("%d %d",&pos,&len);
	scanf("%s",&a);
	if(pos>0&&pos<strlen(a)&&0<len&&len<=(strlen(a)-pos+1))
	{
		for(int i=pos-1;i<pos+len-1;i++)
		
		b[i-(pos-1)]=a[i];
		printf("%s",b);
	}
	else printf("error");
	
	
	
}
