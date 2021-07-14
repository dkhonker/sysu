#include <iostream>
using namespace std;
int main() 
{
int a[5] ;
int i;
for(i = 0; i < 5; i++)
{
     cin>>a[ i ];
 }
 int d=0;
 int t=0;
 for(d=0;d<5;d++)
 {
 for(i=d+1; i < 5; i++)
{
    if(a[i]<a[d])
    {t=a[d];
    a[d]=a[i];
    a[i]=t;
	}
 }
 }
 for(i=0;i<5;i++)
 cout<<a[i]<<" ";
 return 0;
}
