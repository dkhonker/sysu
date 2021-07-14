#include <stdio.h>
#include<string.h> 
int main(){
	char a[20001],b[20001];
	int pos,len;
	int i,j;
	scanf("%d%d",&pos,&len);
	scanf("%s",&a);
	if(len<0||strlen(a)-pos+1<len) return 0;
	for(i=pos-1,j=0;j<=len-1;j++){
		b[j]=a[i];
		i++;
	}
	puts(b);
	return 0;
}
