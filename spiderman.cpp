#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a[100001], winner = 2;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int j = 0; j < n; j++){
        if (a[j] != 1){
            if (a[j] % 2 == 0){
                if (winner == 1){
                    winner = 2;
                }else{
                    winner = 1;
                }
            }
        }
        cout << winner << endl;
    }
    return 0;
}