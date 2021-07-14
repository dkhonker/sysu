#include<stdio.h>

const int MAXN = 12000;
int n, a[MAXN + 1], b[MAXN + 1];

void binSearch(int x, int l, int r) { 
           //�ҵ�b[l]...b[r]�б�x�����С�������滻��x�� ��֤b[r]>x. 
	if (r > l) {
		int mid = (r + l) / 2;
		if (b[mid] == x) return;
		else if (b[mid] > x) binSearch(x, l, mid);
		else if (b[mid] < x) binSearch(x, mid + 1, r);
	}
	else b[r] = x; 
}
int longestNum() {
	int max = 1;
	b[1] = a[1];
	for (int i = 2; i <= n; i++) {
		if (a[i] < b[max]) binSearch(a[i], 1, max);
		else if (a[i] > b[max]) b[++max] = a[i];
	}
	return max;
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	printf("%d", longestNum());
	return 0;
}
