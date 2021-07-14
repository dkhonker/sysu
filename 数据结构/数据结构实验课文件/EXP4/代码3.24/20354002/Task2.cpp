# include <stdio.h>
int pos,len,count=0;
char s[20001],sub[20001];

int main()
{
	scanf("%d",&pos);
	scanf("%d",&len);
	getchar();
	gets(s);
	for(int i=0;s[i]!='\0';i++)
	count=count+1;
	
	if(pos>0&&pos<count)
	{
		if(len>=0&&len<=count-pos+1)
		{
			for(int i=0;i<len;i++)
				sub[i]=s[i+pos-1];
		}
		else printf("error");
	}
	else  printf("error");
	printf("%s",sub);

    return 0;
}
