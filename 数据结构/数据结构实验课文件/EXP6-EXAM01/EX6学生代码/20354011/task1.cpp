#include<iostream>
using namespace std;
typedef struct{
	int front;
	int rear;
	char data[20];
}quene; 
int main(){
	int m{0},n{0},temp{0};
	cin>>m>>n;
	quene Q;
	Q.front=0;
	Q.rear=0;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp==1){
			cin>>Q.data[Q.rear];
			Q.rear=(Q.rear+1)%m;
			cout<<Q.front<<' '<<Q.rear<<endl;
		}
		else{
			Q.front=(Q.front+1)%m;
			cout<<Q.front<<' '<<Q.rear<<endl;
		}
	}
	temp=Q.front;
	while(temp!=Q.rear){
		cout<<Q.data[temp];
		temp=(temp+1)%m;
		if(temp==Q.rear){
			cout<<endl;
		}
	}
	return 0;
}
