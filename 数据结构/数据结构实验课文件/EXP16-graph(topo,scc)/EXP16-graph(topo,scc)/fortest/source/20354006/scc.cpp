#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

const int maxn=50000;
const int maxm=500000;

int n,m;

int a[maxm + 1], b[maxm + 1];
int p[maxn + 2];
int linkto[2 * maxm + 1];
/*p 和linkto 是一维数组来 存储整个邻接表 (使用方便，无需用动态数组） 
 linkto 这个一维数组的   p[v]+1...p[v+1] 这些位置存储v的直接后继。 
 可通过阅读下面这段函数的代码，来理解p和linkto  */ 
void input_data() {
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++)
		scanf("%d %d", &a[i], &b[i]);
	for (int i = 1; i <= m; i++) p[a[i]]++;	
	for (int i = 1; i <= n; i++) p[i] = p[i] + p[i - 1];//相当于指针，方便遍历
	p[n + 1] = p[n];  //trick 多一个指针指向最后一个元素
	for (int i = 1; i <= m; i++) {//构建邻接链表
		linkto[p[a[i]]] = b[i];
		p[a[i]]--;
	}
}

int min(int a,int b){
	return a<b ? a:b; 
}

int count=0;
int index[maxn];
int low[maxn];
int stack[maxn],top=0;
int on_stack[maxn];

int tComponent=0; // tComponent是当前找到的强连通块个数。 
int size[maxn];   // size[i]保存第i个强连通块 的顶点个数。   

void tarjan_scc(int v){  // SCC主过程! 
	index[v]=low[v]=count++;
	stack[count]=v;on_stack[v]=1;// push v into the stack and mark v to be on stack.
	for(int i=p[v]+1;i<=p[v+1];i++){
		int w=linkto[i];
		if(index[w]==0){
			tarjan_scc(w);
			low[v]=min(low[v],low[w]);
		}
		else{
			low[v]=min(index[w],low[v]);
		}
		//add some code here by yourself
		//Hint 1. dfs. Hint 2. modify low[v]
	}
	if(index[v]==low[v]){ // find out a new component. 
		int j;
		do{
			j=count--;j=stack[j];on_stack[j]=0;
			size[tComponent]++;
			//Add some code in the following.
			//Hint: pop an element from the stack to j, and mark j to be not on stack.
		} while (j!=v);
		tComponent++;
	}
}

void swap(int &a, int &b) {
  int t = a; a = b; b = t;
}
void quickSort(int a[], int low, int high) {
  // write this by yourself.
 {
    int i = low;
    int j = high;
    int key = a[low];
    if (low >= high)  //如果low >= high说明排序结束了
    {
        return ;
    }
    while (low < high)  //该while循环结束一次表示比较了一轮
    {
        while (low < high && key <= a[high])
        {
            --high;  //向前寻找
        }
        if (key > a[high])
        {
            swap(a[low], a[high]);
            ++low;
        }
        while (low < high && key >= a[low])
        {
            ++low;  //向后寻找
        }
        if (key < a[low])
        {
            swap(a[low], a[high]);
            --high;
        }
    }
    quickSort(a, i, low-1);  //用同样的方式对分出来的左边的部分进行同上的做法
    quickSort(a, low+1, j);  //用同样的方式对分出来的右边的部分进行同上的做法
}
}

int main(){
	input_data();
	for(int i=1;i<=n;i++)
		if(!index[i]) tarjan_scc(i);

	quickSort(size,0,tComponent-1);
    for(int i=tComponent-1;i>=0;i--) printf("%d ",size[i]);
	return 0;
} 

