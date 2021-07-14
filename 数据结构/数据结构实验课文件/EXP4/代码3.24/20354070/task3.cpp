#include<stdio.h>
#include<string.h>
int main()
{
	char a[20000],b[20000];
	int i,j,pos,len;
	scanf("%d%d\n",&pos,&len);
	gets(a);
	j=pos-1;
	if(pos>=1&&pos<=strlen(a)&&len>=0&&len<=strlen(a)-j)
	{
	    for(i=0;i<len;i++,j++)
	        b[i]=a[j];
	    printf("%s\n",b);
    }
    else
        printf("error");
	return 0;
}
