#include <stdio.h>
#include <malloc.h>
int main()
{
	char a1[20001],a2[20001]; int pos,len,i=0;
	scanf("%d",&pos);scanf("%d",&len);
    scanf("%s",a1);
    for(;i<=pos+len-2;i++)
    {
    	if(i>=pos-1)
    	{
    		a2[i-pos+1]=a1[i];
		}
	}
	printf("%s",a2);
	return 0;
}
