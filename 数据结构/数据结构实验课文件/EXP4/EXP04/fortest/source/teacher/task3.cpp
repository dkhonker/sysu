#include <stdio.h>

int main(){
    int pos,len;
    char a[20001];

    scanf("%d%d", &pos, &len);
    getchar();
    gets(a);

    char res[len + 1];
    int start=0;
    for(int i = pos-1; i < pos+len-1; i++) res[start++] = a[i];
		
    res[start]='\0'; 
    puts(res); 
    return 0;
}
