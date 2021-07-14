#include <stdio.h>
int main(){
	char a[20001],b[20001];
	scanf("%s",a);
	scanf("%s",b);
	int i=0;
	while(a[i]!='\0'&&b[i]!='\0'){
		i++;
		if(a[i]>b[i]){
			printf("1");
		    break;
		}
		if(a[i]<b[i]){
			printf("-1");
		    break;
		}
		if(a[i]==b[i]){
			printf("0");
		    break;
		}
	}
	return 0;
}
