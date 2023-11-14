#include <bits/stdc++.h>
#include <iostream>

using namespace std;

const int Nmax = 20;
int col[Nmax], diag1[Nmax], diag2[Nmax];
int n = 8;

char matrix[Nmax][Nmax];

void search(int y, int &count){
    if (y == n){
        count++;
        return;
    }
    for (int x = 0; x < n; x++){
        if (col[x] || diag1[x+y] || diag2[x-y+n-1] || matrix[y][x] == '*') continue;
        col[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        search(y+1, count);
        col[x] = diag1[x+y] = diag2[x-y+n-1] = 0;

    }
}


int main(){
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    search(0, count);
    cout << count;

    return 0;
}