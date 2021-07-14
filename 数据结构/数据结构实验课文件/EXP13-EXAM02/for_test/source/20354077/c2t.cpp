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
	else
	{
		nodes[i-1].rchild=i;//Fill this part by yourself.  Think about it first.
	}
  }
}

void Preorder(Node &root){ //please finish the following parts.  It is easy. 
printf("%c",root.data);
if(nodes[root.lchild].data) Preorder(nodes[root.lchild]);
if(nodes[root.rchild].data) Preorder(nodes[root.rchild]);
}
void Midorder(Node &root){ //please finish the following parts. It is easier. 
if(nodes[root.lchild].data) Midorder(nodes[root.lchild]);
printf("%c",root.data);
if(nodes[root.rchild].data) Midorder(nodes[root.rchild]);

}

int main(){
  buildTree();
  Preorder(nodes[1]); cout<<"\n";
  Midorder(nodes[1]);cout<<"\n";
  return 0;
}
