#include<stdio.h>
#include<string.h>    
	int main ()
	{     char S1[20001],S2[20001],T[40001];
	       gets(S1);
		   gets(S2);
		   int s1=strlen(S1);int s2=strlen(S2);
		   int i;
		  for(i=0;i<s1;i++)
		   T[i]=S1[i];
		   for(i=s1;i<s1+s2;i++)
		   T[i]=S2[i-s1];
		   printf("%s",T);
		   return 0; 
	} 
