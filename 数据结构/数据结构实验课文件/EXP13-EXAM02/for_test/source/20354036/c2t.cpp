#include<iostream>
using namespace std;

struct Node {
    char data;
    int parent, lchild, rchild;
} nodes[101];

int n, lastchild[101];

void buildTree(){
  cin >> n;
  for (int i = 1; i <= n; i++)
	  cin >> nodes[i].data >> nodes[i].parent;
  for (int i = 2; i <= n; i++){
	int f = nodes[i].parent;
	if (lastchild[f] == 0)
		nodes[f].lchild = lastchild[f] = i;
	else{
	    if(nodes[f].rchild==0){
		    nodes[f].rchild = lastchild[f] = i;
	    }
	    else{
	    	nodes[(n/2)].rchild = lastchild[f] = i;
		} 
  }
}
}

void Preorder(Node &root){ //please finish the following parts.  It is easy. 
    if(root.data!=NULL){
	cout<<root.data;
    Preorder(nodes[root.lchild]);
	Preorder(nodes[root.rchild]);
	}
}
void Midorder(Node &root){ //please finish the following parts. It is easier. 
    if(root.data!=NULL){
	        Midorder(nodes[root.lchild]);
	        Midorder(nodes[root.rchild]);
	        cout<<root.data;
	}
	}
	

int main(){
  buildTree();
  Preorder(nodes[1]); cout<<"\n";
  Midorder(nodes[1]);
  return 0;
}
