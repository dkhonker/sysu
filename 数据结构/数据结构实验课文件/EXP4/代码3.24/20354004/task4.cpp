#include<stdio.h>
#include<string.h> 
int main()
{char a[22],b[22],c[22];
int m,n,rear=0, front=0;
scanf("%d%d",&m,&n);
for(int i=0;i<n;i++)
scanf("%c %c",&b[i],&a[i]);
for(int i=0;i<n;i++)
{if(b[i]=='1'){c[i]=a[i] ;
rear=rear+1;
} 
if(b[i]==2){front=front-1;
}

}

return 0;
}
  
