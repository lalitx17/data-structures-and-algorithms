#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; 
    cin >> T;
    while(T--){
        int n, odd = 0, even = 0, a[100000];
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        for (int j = 0; j < n; j++){
            if (a[j] % 2 == 0){
                even++;
            }else{
                odd++;
            }
        }
        cout << min(odd, even) << endl;
    }
    return 0;
}