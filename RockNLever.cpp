#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, x,count = 0;
        int a[100000];
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int j = 0; j < n-1; j++){
            for (int k = j+1; k < n; k++){
                x = (a[j] & a[k]);
                if ((x) >= (~x)){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}