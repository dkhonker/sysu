#include<stdio.h>
#include<string.h>
int main()
{
		char Xe[20001],de[20002];
		int w=0,i;
    gets(Xe);
	gets(de); 
	for( i=0;(i<strlen(Xe))&&(i<strlen(de));i++)
    {if(Xe[i]>de[i]){w=1;break;
	}
	else if(Xe[i]<de[i]){w=-1;break;
	}
	else continue;
	}
  if(w==0){	if(i==strlen(Xe)){
		w=-1;
	}
	if(i==strlen(de)){
		w=1;
	}
		if(strlen(Xe)==strlen(de)){
		w=0;
	}
  }

	printf("%d",w);
	

 } 
