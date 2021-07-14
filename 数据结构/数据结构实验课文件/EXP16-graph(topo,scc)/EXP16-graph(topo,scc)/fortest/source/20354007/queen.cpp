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
     * ��ʼ�����̣����лʺ��ڵ�0�� 
     */ 
    void init_board(int *a, int n) { 
        int i; 
        for ( i = 0; i < n; i++ ) { 
            a[i] = 0; 
        } 
    } 
    /* 
     * ���N�ʺ����� 
     */ 
    int queen(int n) { 
        int count = 0; 
        int a[MAX_LENGTH]; 
        init_board(a, n); 
        int i = 0; 
        while ( 1 ) { 
            if ( a[i] < n ) { 
                // ����ʺ��λ����δ�������̷�Χ 
                // ��Ҫ����i�еĻʺ��Ƿ���ǰi-1�еĻʺ��ͻ 
                if ( is_conflict(a, i) ) { 
                    // �����ͻ��������һ��λ�� 
                    a[i]++; 
                    continue; 
                } 
                if ( i >= n - 1 ) { 
                    // ����Ѿ������һ�У�Ҳ���ҵ�һ���⣬��������� 
                    count++; 
                    // Ȼ���Ե�ǰ�еĻʺ����һ��λ�� 
                    a[n-1]++; 
                    continue; 
                } 
                // û�г�ͻ��������һ�� 
                i++; 
                continue; 
            } 
            else { 
                // �ʺ��λ���Ѿ��������̷�Χ 
                // ��ô���еĻʺ�λ 
                a[i] = 0; 
                // ���˵���һ�� 
                i--; 
                if ( i < 0 ) { 
                    // �Ѿ����������ˣ��������� 
                    return count; 
                } 
                // ������һ�еĻʺ���¸�λ�� 
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


