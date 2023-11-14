#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll Nmax = 1000001;
ll dice[Nmax];

int main(){
    ll n;
    ll m = 1000000007;
    cin >> n;
    dice[0] = 1;
    for (ll i = 1; i <= n; i++){
        for (ll d = 1; d <= 6; d++){
            if (i-d >= 0){
                dice[i] += dice[i-d];
                dice[i] %= m;
            }
        }
    }
    cout << dice[n] << endl;
    return 0;
}