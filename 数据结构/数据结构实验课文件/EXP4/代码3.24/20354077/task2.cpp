#include <stdio.h>
#include <stdlib.h>

#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char sen1[20001],sen2[20001];
int main(int argc, char *argv[]) {
	int ok=0,i=0;
	gets(sen1);
	gets(sen2);
	if(strlen(sen1)>strlen(sen2)) ok=1;
	else if(strlen(sen1)<strlen(sen2)) ok=-1;
	else 
	{
		while(i<strlen(sen1))
		{
			if(sen1[i]<sen2[i]) 
			{
				ok=-1;
				break;
			}
			if(sen1[i]>sen2[i]) 
			{
				ok=1;
				break;
			}
			i++;
		}
	}
	printf("%d",ok); 
	return 0;
}
