#include<stdio.h>
#include<string.h>
int main()
{
	int pos,len,i,j;
	char c[20000];
	char d[20000];
	scanf("%d%d",&pos,&len);
	getchar();
	gets(c);
	if(pos-1<0||pos>strlen(c)||len<0||len>strlen(c)-pos+1)
	return 0;
	else
	for(j=0,i=pos-1;i<=pos-1+len-1;i++,j++)
	{
	d[j]=c[i];
}
    puts(d);
    return 0;
}
