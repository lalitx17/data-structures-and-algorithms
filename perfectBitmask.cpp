#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; 
    cin >> T;
    while(T--){
        int x,num, ind, dec = 0, base = 1;
        string binary = "";
        cin >> x;
        num = ceil(log2(x));
        if (x == 1){
            cout << 3 << endl;
            continue;
        }
        for (int i = 0; i <= num; i++){
            if (x & (1 << i)){
                ind = i;
                break;
            }
        }
        for (int j = 0; j < ind; j++){
            binary += '0';
        }
        binary =  binary + '1';
        if (ind == num){
           binary[0] = '1';
        } 
        for (int k = 0; k <= ind; k++){
            if (binary[k] == '1'){
               dec += base;
            }
            base *= 2;
        }
        cout << dec << endl;
    }
}