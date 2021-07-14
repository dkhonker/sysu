#include<stdio.h>
#include<string.h>
 int compare(char a[20001],char b[20001])
  {
  int i=0;
  int x;

  	while(i<=20000)
  	{
  		char A,B;
  		A=a[i];
  		B=b[i];
  		if(A<B)
		  {
		  x=-1;
		  break;}
  		if(A==B)
  		{
		  x=0;
		  break;}
  		if(A>B)
  		{
		  x=1;
		  break;}
		  
	  }
	  return x;
   } 
   
   
main()
{
char a[20001],b[20001],c[40001];
int com;
gets(a);
gets(b);
com=compare(a,b);
printf("%d",com);
return 0;
 }
 

