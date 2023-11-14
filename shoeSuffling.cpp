#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T; 
    while(T--){
        long long n, ctr = 0, a[100000];
        bool state = false;
        vector<int> v;
        int previousInt;
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        if (n == 1){
            cout << -1 << endl;
            continue;
        }
        previousInt = a[0];
        for (int j = 0; j < n; j++){
            if (previousInt == a[j]){
                ctr++;
            }else{
                if (ctr == 1){
                    state = true;
                    break;
                }else{
                    v.push_back(ctr);
                    ctr = 1;
                    previousInt = a[j];
                }
            }
        }
        if (ctr == 1){
            state = true;
        }else{
            v.push_back(ctr);
        }
        if (state){
            cout << -1 << endl;
        }else{
            int indexCtr = 1;
            for (auto x: v){
                for (int k = indexCtr; k < indexCtr + x - 1; k++){
                    cout << k+1 << " ";
                }
                cout << indexCtr << " ";
                indexCtr += x;
            }
            cout << endl;
        }


        }
        
    return 0;
}