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
		nodes[f].rchild = lastchild[f] = i;
		//Fill this part by yourself.  Think about it first.
	}
  }
}

void Preorder(Node &root){ 
	printf("%c",root.data);
	root=root.lchild;
	Preorder(root);
	root=root.rchild;
	Preorder(root);
//please finish the following parts.  It is easy. 
}
void Midorder(Node &root){

	root=root->lchild;
	Preorder(root);	
	printf("%c",root);
	root=root->rchild;
	Preorder(root);
 //please finish the following parts. It is easier. 
}

int main(){
  buildTree();
  Preorder(nodes[1]); cout<<"\n";
  Midorder(nodes[1]);
  //Fill this part by yourself.
  return 0;
}
