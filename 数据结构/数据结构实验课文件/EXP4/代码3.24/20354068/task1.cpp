 #include<stdio.h>
 #include<string.h>
 char a[20001]; 
 char b[20001];
 char c[40002];
 int i = 0;
 int j = 0;
 int main()
 {
 	gets(a);
 	gets(b);
 	for(;a[i] != '\0';i++)
 	c[i] = a[i];
 	for(;b[j] != '\0';j++,i++)
 	c[i] = b[j];
 	c[i] = '\0';
 	puts(c);
 	return 0;
 }
