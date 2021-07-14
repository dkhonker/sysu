#include <stdio.h>
char s[25];
int main()
{
	char t,y;
	int m,n,temp,fr,re;
	fr=0; re=0;
	scanf("%d",&m);//m个位的循环队列 
	scanf("%d",&n);//n个操作 
	for(int i =1 ; i<= n;i++)
	{
		scanf("%d",&temp);
		if(temp==1)
		{
			y=getchar();
			scanf("%c",&t);
			s[re] = t;
			re = (re + 1 )%m;
		}
		if(temp==2)
		{
			s[fr] ='\0';	fr = (fr +1) %m;
		}
		printf("%d %d\n",fr,re);
	}
	for(int i=0;i<=m-1;i++)
	{
		if(s[i] != '\0')
		printf("%c",s[i]);
	}
	return 0;
}
