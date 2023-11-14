#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll Nmax = (ll)100000000;
ll people[Nmax], apartment[Nmax];

int main(){
    ll n, m, k, count = 0;
    cin >> n; 
    cin >> m;
    cin >> k;
    for (ll i = 0; i < n; i++){
        cin >> people[i];
    }
    for (ll j = 0; j < m; j++){
        cin >> apartment[j];
    }
    sort(apartment, apartment + m);
    for (ll z = 0; z < n; z++){
        ll left = 0, right = m-1;
        while(left <= right){
            ll mid = (left+right)/2;
            if (apartment[mid] >= people[z]-k && apartment[mid] <= people[z]+k){
               count++;
               ll counter = 0;
               for (ll p = 0; p < m; p++){
                   if (p == mid) continue;
                   apartment[counter] = apartment[p];
                   counter++;
               }
               break;
            }
            if (apartment[mid] < people[z] - k) left = mid + 1;
            else right = mid - 1; 
        }
        if (count == m) break;
    }
    cout << count << endl;
    return 0;
}