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
		//Fill this part by yourself.  Think about it first.
		
	}
  }
}

void Preorder(Node *root){
//please finish the following parts.  It is easy. 
 	if(root==NULL)
 	{
 		return;
	 }
	 cout<<root->data;
	 Preorder(nodes->lchild);
	 Preorder(root->rchild);
}
void Midorder(Node &root){ //please finish the following parts. It is easier. 
    if(root==NULL)
 	{
 		return;
	 }
	 Midorder(nodes->lchild);
	 cout<<nodes->data;
	 Midorder(nodes->rchild);
}

int main(){
  buildTree();
  Preorder(nodes[1]); cout<<"\n";
  //Fill this part by yourself.
  return 0;
}
