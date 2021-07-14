#include<stdio.h>
#include<iostream>
#define MAX_LENGTH 10
int is_conflict(int *a, int n) { 
        int flag = 0; 
        int i; 
        for ( i = 0; i < n; i++ ) { 
            if ( a[i] == a[n] || a[i] - a[n] == n - i || a[n] - a[i] == n - i ) { 
                flag = 1; 
                break; 
            } 
        } 
        return flag; 
    } 
    
    /* 
     * 初始化棋盘，所有皇后都在第0列 
     */ 
    void init_board(int *a, int n) { 
        int i; 
        for ( i = 0; i < n; i++ ) { 
            a[i] = 0; 
        } 
    } 
    /* 
     * 解决N皇后问题 
     */ 
    int queen(int n) { 
        int count = 0; 
        int a[MAX_LENGTH]; 
        init_board(a, n); 
        int i = 0; 
        while ( 1 ) { 
            if ( a[i] < n ) { 
                // 如果皇后的位置尚未超出棋盘范围 
                // 需要检查第i行的皇后是否与前i-1行的皇后冲突 
                if ( is_conflict(a, i) ) { 
                    // 如果冲突，尝试下一个位置 
                    a[i]++; 
                    continue; 
                } 
                if ( i >= n - 1 ) { 
                    // 如果已经到最后一行，也即找到一个解，首先输出它 
                    count++; 
                    // 然后尝试当前行的皇后的下一个位置 
                    a[n-1]++; 
                    continue; 
                } 
                // 没有冲突，尝试下一行 
                i++; 
                continue; 
            } 
            else { 
                // 皇后的位置已经超出棋盘范围 
                // 那么该行的皇后复位 
                a[i] = 0; 
                // 回退到上一行 
                i--; 
                if ( i < 0 ) { 
                    // 已经不能再退了，函数结束 
                    return count; 
                } 
                // 尝试上一行的皇后的下个位置 
                a[i]++; 
                continue; 
            } 
        } 
    } 
    int main(void) { 
        int n ; 
        scanf("%d",&n);
        int count = queen(n)%10000; 
        printf("%d", count); 
        return 0; 
    }


