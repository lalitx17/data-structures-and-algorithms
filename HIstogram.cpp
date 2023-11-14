#include <bits/stdc++.h>

using namespace std;
long long a[1000000];


int main(){
    int T; 
    cin >> T;
    while(T--){
        long long n, totalSum = 0;
        cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        a[0] = a[n+1] = 0;
        for (int j = 0; j < n+1; j++){
            totalSum += (abs(a[j]- a[j+1]));
        }
        for (int k = 1; k <= n; k++){
            if (a[k] > a[k+1]){
                if ((a[k]- max(a[k-1], a[k+1])) > 0){
                totalSum = totalSum - (a[k]- max(a[k-1], a[k+1]));
                a[k] = max(a[k-1], a[k+1]);
                }
            }
        }
        cout << totalSum << endl;

    }
    return 0;
}