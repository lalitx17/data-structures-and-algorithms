#include <bits/stdc++.h>

using namespace std;


int main(){
    int T; 
    cin >> T; 
    cin.ignore();
    while(T--){
        string s, t, x;
        long long result; 
        bool state = false;
        x = "a";
        getline(cin, s);
        getline(cin, t);
        if (t.length() == 1){
            if (t == x){
            cout << 1 << endl;
            }else{
                result = pow(2, s.length());
                cout << result << endl;
            }
            continue;
        }else{
            for (unsigned int i = 0; i < t.length(); i++){
                if (t[i] == 'a'){
                  state = true;
                }
            }
        }
        if (state){
            cout << -1 << endl;
        }else{
            result = pow(2, s.length());
            cout << result << endl;
        }
    }    
    return 0;
}