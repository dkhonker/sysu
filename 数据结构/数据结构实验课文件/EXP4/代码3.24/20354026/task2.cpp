#include<stdio.h> 
main()
{
	char str1[20000];
	char str2[20000];
	int i=0;
	int flag=2;
	gets(str1);
	gets(str2);
	while(str1[i]!='\0'&&str2[i]!='\0') 
	{
		
		if((str1[i]-str2[i]) >0) 
		{
			flag=1;
			break; 
		}
		else if((str1[i]-str2[i]) <0) 
		{
			flag=-1;
			break; 
		}
		i++;
	}
	if(str1[i]=='\0'&&str2[i]=='\0') flag=0;
	printf("%d",flag);
}
	
