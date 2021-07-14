 #include<stdio.h>
 #include<string.h>
 char a[20001]; 
 char b[20001]; 
 int i = 0;
 int lena = 0;
 int lenb = 0;
 int main()
 {
 	gets(a);
 	gets(b);
 	for(int j = 0;a[j] != '\0';j++)
 	lena++;
 	for(int j = 0;b[j] != '\0';j++)
 	lenb++;
 	for(;(a[i] != '\0') && (b[i] != '\0');i++)
 	if (a[i] > b[i])
 	{
	 printf("1");
	 return 0;
}
 	else if(a[i] < b[i])
 	{
	 printf("-1");
	 return 0;
}
 	if(lena > lenb)
	 printf("1");
 	else if(lena == lenb)
 	printf("0");
 	else printf("-1");
 	return 0;
 }
 
