#include<stdio.h>
#include<string.h>
int main()
{
	char Xe[20001],de[20002],str[40001];
    gets(Xe);
	gets(de); 
	for(int i=0;i<strlen(Xe);i++)
	{
		str[i]=Xe[i];
								}    
	for(int i=0;i<strlen(de);i++)
	{
		str[i+strlen(Xe)]=de[i];
								}  
	printf("%s",str);							                        
	
	
 } 
