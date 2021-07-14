#include <stdio.h>

int main() {
    char a[20001],b[20001];
    int i=0;

    gets(a);
    gets(b);
    while (a[i]!='\0'&&b[i]!='\0'){
        if (a[i]==b[i])
            i++;
        else if (a[i]<b[i]){
            printf("-1"); return 0;
        } else{
            printf("1"); return 0;
        }
    }
    if (a[i]=='\0'&&b[i]=='\0'){
        printf("0");
    } else if (a[i]!='\0'&&b[i]=='\0'){
        printf("1");
    } else if (b[i]!='\0'&&a[i]=='\0'){
        printf("-1");
    }
    return 0;
}
