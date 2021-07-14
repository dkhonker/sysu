#include<iostream>
using namespace std;

struct Node {
    char data;
    int parent, lchild, rchild;
} nodes[101];

int n, lastchild[101];
//for(int i=0;i<101;i++) lastchild[i]=0;
void buildTree(){
  cin >> n;
  for (int i = 1; i <= n; i++)
	  cin >> nodes[i].data >> nodes[i].parent;
  for (int i = 2; i <= n; i++){
	int f = nodes[i].parent;
	if (lastchild[f] == 0)
		nodes[f].lchild = lastchild[f] = i;
	else{
		   //if(nodes[f].rchild==i) continue;
		   f=nodes[f].lchild;
		   	while(nodes[f].rchild!=0){
		   	    f=nodes[f].rchild;
		        }
		        nodes[f].rchild=i;
		        nodes[i].parent=f;
		   
		   
		//Fill this part by yourself.  Think about it first.
	}
  }
  //for(int i=1;i<=n;i++) printf("%c %d %d %d\n",nodes[i].data,nodes[i].parent,nodes[i].lchild,nodes[i].rchild);
}

void Preorder(Node &root){ //please finish the following parts.  It is easy. 
      if(root.data!=0)
      {
      	cout<<root.data;
        Preorder(nodes[root.lchild]);
        Preorder(nodes[root.rchild]);
	  }
}
void Midorder(Node &root){ //please finish the following parts. It is easier. 
      
	  if(root.data!=0)
	  { 
	  Midorder(nodes[root.lchild]);
      printf("%c",root.data);
      Midorder(nodes[root.rchild]);} 
}

int main(){
  buildTree();
  Preorder(nodes[1]); cout<<"\n";
  Midorder(nodes[1]); 
  //Fill this part by yourself.
  return 0;
}
