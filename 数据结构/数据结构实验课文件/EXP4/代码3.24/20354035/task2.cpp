#include<stdio.h>
#include<string.h>
	int main ()
	{     char S1[20001],S2[20001];
	       gets(S1);
		   gets(S2);
		   int s1=strlen(S1);int s2=strlen(S2);
		   if(s1>s2)
		   printf("1");
		   else if(s1==s2)
		   printf("0");
		   else
		   printf("-1");
		   return 0;
	}
