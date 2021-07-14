#include <stdio.h>
#include <malloc.h>
int main()
{
	char a1[20001],a2[20001]; int i=0;
	scanf("%s",a1);scanf("%s",a2);
	while(a1[i]!='\0'||a2[i]!='\0')
	{
		if(a1[i]>a2[i])
		{printf("1");break;} 
		if(a1[i]<a2[i])
		{printf("-1");break;} 
		i++;
}
    if(a1[i]==a2[i])
    printf("0");
	return 0;
}
