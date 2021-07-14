#include <stdio.h>
#include <string.h>

main(){
	int len_a,len_b,i,flag=0;
	char a[20001],b[20001],c[40002];
	gets(a);gets(b);
	len_a=strlen(a);len_b=strlen(b);
	int maxlen=len_a>len_b?len_a:len_b;
    for(i=0;i<maxlen;i++)
       if(a[i]>b[i]) {
	   printf("1");flag=1;break;}
       else if(a[i]<b[i]) {
	   printf("-1");flag=1;break;}
    if(flag=0) printf("0");
    
}
       
