#include <iostream>
using namespace std;
int main() {
int a[5] ;
int i;
for(i = 0; i < 5; i++)
{
     cin>>a[ i ];
     }
     for(int n = 0; n < i; n++){
      cout<<a[ n ]<<" ";
 }
 int t;
 for(i = 0; i < 4; i++)
 if(a[i]>a[i+1])
 {
 	t=a[i];
 	a[i]=a[i+1];
 	a[i+1]=t;
 	i=-1;
 }
cout<<endl;
for(i=0;i<5;i++)
{cout<<a[i]<<" ";
}
	return 0;
}
