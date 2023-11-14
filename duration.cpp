#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; 
    cin >> T; 
    while (T--){
        int n, s[200000], f[200000]; 
        cin >> n; 
        for (int i = 0 ; i < n; i++){
            cin >> s[i];
        }
        for (int i = 0 ; i < n; i++){
            cin >> f[i];
        }
        cout << f[0] - s[0] << " ";
        for (int k = 1; k < n; k++){
            if (s[k] < f[k-1]){
                cout << f[k]-f[k-1] << " ";
            }else{
                cout << f[k]-s[k] << " ";
            }
        }
        cout << endl;        
    }
    return 0;
}