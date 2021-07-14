#include <stdio.h>

int main() {
    char a[20001],b[20001],re[40001];
    int i=0,j=0;

    gets(a);     
    gets(b);
    while(a[i]!='\0'){
    	re[i]=a[i];
    	i++; 
	}
    while(b[j]!='\0')   
        re[i++]=b[j++];
    re[i]='\0';    
    puts(re);   
    return 0;
}
