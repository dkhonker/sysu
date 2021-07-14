#include<iostream>
using namespace std;

int m,n,front,rear;
char a[100];

int main(){
	int i=0;
	cin>>m>>n;
	while(i<n){
		int op=0;
		cin>>op;
		if(op==1){
			char c;
			cin>>c;
			a[rear++]=c;
			if(rear >m-1){
				rear-=m;
			}
			cout<<front<<" "<<rear<<endl;	
		}
		if(op==2){
			a[front++]=0;
			if(front>m-1){
				front-=m;
			}
			cout<<front<<" "<<rear<<endl;
		}
		i++;
	}
	char b[100];
	int k=0;
	for(i=front;i<100;i++){
		if (a[i]!='\0'){			
		b[k]=a[i];
		k++;	}
    }
    cout<<b<<endl;
}

