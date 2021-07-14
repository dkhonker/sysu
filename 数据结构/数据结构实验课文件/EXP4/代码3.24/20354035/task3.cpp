#include<stdio.h>
#include<string.h>
	int main ()
	    {      int pos,len,i;
           scanf("%d %d",&pos,&len);
	       char S1[20001],S2[20001];
	       scanf("%s",S1);
		   int s1=strlen(S1);
		   if(0<=len&&len<=s1-pos+1)
		     {
			    for(i=pos-1;i<pos+len-1;i++)
		        S2[i-pos+1]=S1[i];
			 }
			 printf("%s",S2);
			 return 0;
		}
