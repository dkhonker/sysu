#include<iostream>
using namespace std;

struct Node {
    char data;
    int parent, lchild, rchild; // 记录的都是下标（在数组中的位置 
} nodes[101];

int n, lastchild[101];

void buildTree(){
  cin >> n;
  for (int i = 1; i <= n; i++)
	  cin >> nodes[i].data >> nodes[i].parent;
  for (int i = 2; i <= n; i++){
	int f = nodes[i].parent; // f 是父亲的下标 
	if (lastchild[f] == 0)
		nodes[f].lchild = lastchild[f] = i;
	else{
		//Fill this part by yourself.  Think about it first.
		nodes[lastchild[f]].rchild = i;
		//nodes[f].rchild = i;
		lastchild[f] = i; 
	}
  }
}

void Preorder(Node &root){ //please finish the following parts.  It is easy. 
	cout<<root.data ;
	if(nodes[root.lchild].data) Preorder(nodes[root.lchild]);
	if(nodes[root.rchild].data) Preorder(nodes[root.rchild]);
}
void Midorder(Node &root){ //please finish the following parts. It is easier. 
	if(nodes[root.lchild].data) Midorder(nodes[root.lchild]);
	cout<<root.data;
	if(nodes[root.rchild].data) Midorder(nodes[root.rchild]);
}

int main(){
  buildTree();
  Preorder(nodes[1]); cout<<"\n";
  //Fill this part by yourself.
  Midorder(nodes[1]);//cout<<"\n";
  return 0;
}



