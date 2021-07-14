#include<iostream>
using namespace std;

struct Node {
    char data;
    int parent, lchild, rchild;
} nodes[101];

int n, lastchild[101],k;

void buildTree(){
  cin >> n;
  for (int i = 1; i <= n; i++)
	  cin >> nodes[i].data >> nodes[i].parent;
  for (int i = 2; i <= n; i++){
	int f = nodes[i].parent;
	if (lastchild[f] == 0)
		nodes[f].lchild = lastchild[f] = i;
	else{
		nodes[lastchild[f]].rchild=lastchild[f] = i;
		
		
		//Fill this part by yourself.  Think about it first.
	}
  }
}

void Preorder(Node &root){ //please finish the following parts.  It is easy. 
    if(nodes==NULL) return;
    cout<<nodes->data;
    Preorder(nodes[nodes->lchild]);
    Preorder(nodes[nodes->rchild]);
    return;
}
void Midorder(Node &root){ //please finish the following parts. It is easier. 
    if(nodes==NULL) return;
    Midorder(nodes[nodes->lchild]);
    cout<<nodes->data;
    Midorder(nodes[nodes->rchild]);

}

int main(){
  buildTree();
  Preorder(nodes[1]); cout<<"\n";
  //Fill this part by yourself.
  return 0;
}
