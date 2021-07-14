#include <stdio.h>
#include <string.h>
int main()
{
	char str1[20001],str2[20001];int pos,len;
	scanf("%d %d",&pos,&len);
	scanf("%s",str1);
    for(int i=0;i<len;i++){
    	str2[i]=str1[pos+i-1];
	}
    puts(str2);
	return 0;
}
