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
		f=nodes[f].lchild;
		while(nodes[f].rchild!=0)f=nodes[f].rchild;
		nodes[f].rchild=i;
		//Fill this part by yourself.  Think about it first.
	}
  }
}

void Preorder(Node &root){ //please finish the following parts.  It is easy. 
if(!root.data)return;
cout<<root.data;
Preorder(nodes[root.lchild]);
Preorder(nodes[root.rchild]);
return;
}
void Midorder(Node &root){ //please finish the following parts. It is easier. 
if(!root.data)return;
Midorder(nodes[root.lchild]);
cout<<root.data;
Midorder(nodes[root.rchild]);
return;
}

int main(){
  buildTree();
  Preorder(nodes[1]); cout<<"\n";
  Midorder(nodes[1]);
  //Fill this part by yourself.
  return 0;
}
