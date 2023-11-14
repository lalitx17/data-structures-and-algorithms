#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; 
    cin >> T;
    while(T--){
        int n, k, black = 0, maxBlack;
        string s;
        cin >> n >> k >> s;

        for (int i = 0; i < k; i++){
            if (s[i] == 'B'){
                black++;
            }
        }
        maxBlack = black;
        for (int j = 1; j <= n - k; j++){
            if (s[j-1] == 'B'){
                black--;
            }
            if (s[j+k-1] == 'B'){
                black++;
            }
            maxBlack = max(maxBlack, black);
        }
        if (k-maxBlack <= 0){
            cout << "0" << endl;
        }else{
            cout << k-maxBlack << endl;
        }

    }
    return 0;
}