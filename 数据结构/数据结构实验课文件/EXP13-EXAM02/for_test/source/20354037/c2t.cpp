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
		if(nodes[f].rchild!=0)
		{ 
			nodes[f].rchild = lastchild[f] = i;
		} 
		else
		{
			nodes[n/2].rchild = lastchild[f] = i;
		} 
		//Fill this part by yourself.  Think about it first.
	}
  }
}

void Preorder(Node &root){ //please finish the following parts.  It is easy. 
	if(root.parent != 0)
	{
		cout<<root.data;
		Preorder(nodes[root.lchild]);
		Preorder(nodes[root.rchild]);
	}
}
void Midorder(Node &root){ //please finish the following parts. It is easier. 
	if(root.parent != 0)
	{
		
		Midorder(nodes[root.lchild]);
		cout<<root.data;
		Midorder(nodes[root.rchild]);
	}
}

int main(){
  buildTree();
  Preorder(nodes[1]); cout<<"\n";
  //Fill this part by yourself.
  Midorder(nodes[1]);cout<<"\n";
  return 0;
}
