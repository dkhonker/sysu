#include<stdio.h>
int main(){

char S[200001];
char Sub[20001];
int pos,len;
scanf("%d%d",&pos,&len);
gets(S);

if(pos<1||pos>S[0]||len<0||len>S[0]-pos+1)
return ERROR;
Sub[1..len]=S[pos..pos+len-1];
Sub[0]=len;
return OK;

puts(Sub);
return 0;
