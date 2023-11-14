#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, q, a[200000], sum = 0, x;
    cin >> n >> q;
    for (int z = 0; z < n; z++){
        cin >> a[z];
        sum += a[z];
    }
    for (int y = 0; y < q; y++){
        int t;
        cin >> t;
        if (t == 1){
            int i;
            cin >> i >> x;
            sum -= a[i-1];
            sum += x;
            a[i-1] = x;
        } else if (t == 2){
            cin >> x;
            fill(a, a+n, x);
            sum = n*x;
        }
        cout << sum << endl;
    }
    return 0;
}