#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
	int a[10001];
	int n{0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int max{a[0]};
		int index{0};
		for(int j=1;j<n-i;j++){
			if(a[j]>max){
				index=j;
				max=a[j];
			}
		}
		int temp=a[index];	
		a[index]=a[n-i-1];
		a[n-i-1]=temp;
		
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	return 0;
} 
