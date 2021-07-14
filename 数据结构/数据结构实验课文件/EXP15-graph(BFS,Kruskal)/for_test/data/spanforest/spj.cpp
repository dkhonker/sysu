#include<fstream>
#include<memory.h>
#include<stdlib.h>
#include<string>
#include<vector>
#include<set>
using namespace std;
ifstream fin, fout, fstd;
ofstream fscore, freport;

int score;
const int maxn = 5001;
int d[maxn];
int n, ans_out, ans_std;
int *A[maxn];
int *B[maxn];

int f[maxn], rank[maxn];
int find(int x){
	if (f[x] != x) f[x] = find(f[x]);
	return f[x];
}
void unionroot(int ra, int rb){
	if (rank[ra] < rank[rb]) f[ra] = rb;
	else if (rank[rb] < rank[ra]) f[rb] = ra;
	else{
		f[ra] = rb; rank[rb] ++;
	}
}

void judge(){
	fin>>n;
	for(int i=1;i<=n;i++){
		f[i]=i;rank[i]=0;
	} 
	for(int i=1;i<=n;i++){
		fin>>d[i];
		A[i]=(int*)malloc(sizeof(int)*(d[i]+1));
		for(int j=1;j<=d[i];j++) fin>>A[i][j];
	}
    fout>>ans_out;
	for(int i=1;i<=n;i++){
		int d_;
		fout>>d_;
		if(d[i]!=d_){
			freport<<"Invalid degree number!";
			fscore<<0<<endl;
			return;
		}
		B[i]=(int*)malloc(sizeof(int)*(d[i]+1));
		for(int j=1;j<=d[i];j++) fout>>B[i][j];
	}

	fstd>>ans_std;
	int nums=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=d[i];j++) nums+=B[i][j];	
	if(ans_std !=ans_out || ans_out*2!=nums){
		fscore<<0<<endl;
		freport<<"Invalid edge numbers!";
		return;
	}
 
	for(int i=1;i<=n;i++)
		for(int j=1;j<=d[i];j++)
			if(B[i][j]){
				int x=A[i][j];
				if(find(i)==find(x)){
					fscore<<0<<endl;
					freport<<"Invalid results: not a forest!";
					return;
				}
				else {
					unionroot(find(i),find(x));
					for(int k=1;k<=d[x];k++){
						if(A[x][k]==i){
							if(!B[x][k]){
								fscore<<0<<endl;
								freport<<"Invalid results!";
								return;
							}
							else B[x][k]=0;
						}
					}
				}
			}
	
  fscore<<score<<endl;
  freport<<"Success!";			
}

	
int main(int argc, char* argv[]){
	//put something to fstreams...
/*
argv[1]:输入文件
argv[2]:选手输出文件
argv[3]:标准输出文件
argv[4]:单个测试点分值
argv[5]:输出最终得分的文件
argv[6]:输出错误报告的文件
*/
	fin.open(argv[1]);
	fout.open(argv[2]);
	fstd.open(argv[3]);
	fscore.open(argv[5]);
	freport.open(argv[6]);

	score = atoi(argv[4]);

	judge();

	fin.close();
	fout.close();
	fstd.close();
	fscore.close();
	freport.close();
	return 0;
}
