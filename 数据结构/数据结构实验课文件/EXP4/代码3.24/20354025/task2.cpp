#include <stdio.h>
int main()
{
char a[20001];
char b[20001];
char c[40002];
scanf("%s",a);
scanf("%s",b);
int i=0;
while(a[i]!='\0'||b[i]!='\0')
{
if(a[i]!=b[i])
{
if(a[i]>b[i]){printf("1");break;
}
else if(a[i]<b[i]){printf("-1");break;
}
else if(a[i]!='\0'&&b[i]=='\0'){printf("1");break;
}
else if(a[i]=='\0'&&b[i]!='\0'){printf("-1");break;
}
}
i++;
}
if(a[i]=='\0'&&b[i]=='\0')printf("0");
return 0;
}

