#include<iostream>
using namespace std;
typedef struct{
	int childnum{0};
	int child[101]{-1};
	char data;
	int pa;			
}Tree;
typedef struct Node{
	char data;
	int lc{-1};
	int rc{-1};
}BiTree;
Tree t[101];int n;BiTree s[101];
void transtion(int pos){
	if(pos==-1)return;
	for(int i=1;i<=t[pos].childnum;i++){
		if(i==1){
			s[pos].lc=t[pos].child[i];
		}
		else s[t[pos].child[i-1]].rc=t[pos].child[i];
		transtion(t[pos].child[i]);
	}
}
void preorder(int pos){
	if(pos==-1)return;
	cout<<s[pos].data;
	preorder(s[pos].lc);
	preorder(s[pos].rc);
}
void midorder(int pos){
	if(pos==-1)return;
	midorder(s[pos].lc);
	cout<<s[pos].data;
	midorder(s[pos].rc);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i].data;
		cin>>t[i].pa;
		t[t[i].pa].childnum++;
		t[t[i].pa].child[t[t[i].pa].childnum]=i; 
	}
	for(int i=1;i<=n;i++){
		s[i].data=t[i].data;
	}
	transtion(1);
	preorder(1);
	cout<<endl;
	midorder(1);
	return 0;
} 
 


