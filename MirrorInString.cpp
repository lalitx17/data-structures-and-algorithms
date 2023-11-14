#include <bits/stdc++.h>

using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n,p = 0;
        bool state = false;
        string s, q = "";
        cin >> n >> s;
        if (s[0] == s[1]){
            q += s[0];
            q += s[0];
            cout << q << endl;
            continue;
        }
        for (int i = 1; i < n; i++){
          if (int(s[i-1]) < int(s[i])){
              p = i-1;
              state = true;
              break;
          }
        }
        if (!state){
              p = n-1;
          }
        for (int j = 0; j <= p; j++){
            q += s[j];
        }
        for (int k = p; k >= 0; k--){
            q += s[k];
        }
        cout << q << endl;
    }
    return 0;
}