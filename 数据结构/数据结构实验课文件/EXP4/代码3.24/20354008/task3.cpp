#include <stdio.h>
#include<string.h>
int main(){
int maxn=20001;
char a[maxn];
char b[maxn];
int c,d;
scanf("%d %d",&c,&d);
getchar();
gets(a);
for(int i=0,j=0;d>=0&&d<=strlen(a)-c+1;){
	if(i<=c-2)
	i++;
	else if(i>=c-1&&i<c+d-1){
		b[j]=a[i];
		j++;
		i++;}
	else if(i>=c+d-1)
			break;
		}
     puts(b);
     return 0;
}
