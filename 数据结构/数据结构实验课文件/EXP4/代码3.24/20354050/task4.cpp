#include <stdio.h>
#include <malloc.h>
int main()
{
    int n,m,i=1,a,fr=0,re=0;
	scanf("%d",&m);scanf("%d",&n);
    char a1[100],x;
    for(;i<n+1;i++)
    {
      scanf("%d",&a);
	  if(a==1)
	  {
	  	scanf(" "); scanf("%c",&x);
		a1[re]=x; re=(re+1)%4;
	  }
	  else
	  {
		a1[re]='\0';
	    fr=(fr+1)%4;
	  }
	 printf("%d %d\n",fr,re);
	}
	if(re>=fr)
	{
	for(i=fr;fr<=re;fr++)
	printf("%c",a1[i]);} 
    else
	{
	for(i=fr;i<=m-1;i++)
    printf("%c",a1[i]);
    for(i=0;i<=re;i++)
    printf("%c",a1[i]);
    }
    
	return 0;
}
