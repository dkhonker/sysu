#include<iostream>
using namespace std;

struct Node {
    char data;
    int parent, lchild, rchild;
} nodes[101];

int n, lastchild[101];

void buildTree(){
  cin >> n;
  int k=0;
  for (int i = 1; i <= n; i++)
	  cin >> nodes[i].data >> nodes[i].parent;
    for (int j = 2; j <= n; j++){
	    int f = nodes[j].parent;
	    if (lastchild[f] == 0){
		    nodes[f].lchild = lastchild[f] = j; k=j;
	    }
	    else{
		    nodes[k].rchild=j; k=j;
		//Fill this part by yourself.  Think about it first.
	    }
    }
}

void Preorder(Node &root){ //please finish the following parts.  It is easy. 
    printf("%c",root.data);
    if(root.lchild!=0) Preorder(nodes[root.lchild]);
    if(root.rchild!=0) Preorder(nodes[root.rchild]);
}
void Midorder(Node &root){ //please finish the following parts. It is easier.
    if(root.lchild!=0) Midorder(nodes[root.lchild]);
	printf("%c",root.data);
	if(root.rchild!=0) Midorder(nodes[root.rchild]);
}

int main(){
  buildTree();
  Preorder(nodes[1]); cout<<"\n";
  Midorder(nodes[1]);
  //Fill this part by yourself.
  return 0;
}
