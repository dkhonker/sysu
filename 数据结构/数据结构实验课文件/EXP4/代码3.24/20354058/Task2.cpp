#include<stdio.h>
#include<string.h>
int main()
{char a[20000];
char b[20000];
gets(a);gets(b);
int i=0;int j=0;int k; int p;
k=strlen(a);
p=strlen(b);
for(i=0;i<k&&i<p;i++)
{if (a[i]>b[i])  {printf("1\n");return 1;}

else if(a[i]<b[i]) {printf("-1\n");return -1;}

else if(a[i]==b[i])
  {if(k>p) {printf("1\n");return 1;}
   else if(k<p) {printf("-1\n");return -1; }
   else if(k==p) {printf("0\n");return 0;}
  }

}
 } 
