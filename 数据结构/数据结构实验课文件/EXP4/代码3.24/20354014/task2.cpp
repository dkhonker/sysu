# include<stdio.h>
# include<string.h>
 int main()
 {
 
 	int max=20000;int x;
 	char str1[max],str2[max];
 	scanf("%s",str1);
	 scanf("%s",str2);
	 for (int i=0;i<strlen(str1)&&i<strlen(str2);i++)
 	if (str1[i]!=str2[i]) 
 	if (str1[i]-str2[i])
 	x= 1;
 	else x= -1;
 	else {
	 int tremp=strlen(str1)-strlen(str2);
	 if (tremp)
 	x= 1;
 	else 
 	if (tremp==0)
	x= 0;
	 else x= -1; 
    }  
    printf("%d",x);
    return x;
 }
