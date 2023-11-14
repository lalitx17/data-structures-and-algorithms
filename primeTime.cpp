#include <bits/stdc++.h>

using namespace std;

using ll = long long; 
const ll Nmax = 100000000;

ll prime[Nmax];
ll frequency[Nmax];


int main(){
   ll t, m;
   for(ll i = 0; i < t; i++){
    cin >> m;
    ll sum = 0;
    for (ll j = 0; j < m; j++){
        cin >> prime[j];
        cin >> frequency[j];
        sum += prime[j]*frequency[j];
      }  
      for (ll k = 0; k < m; k++){
          double next = (double)(sum - prime[k])/(prime[k]+1);
          if (next != ((sum-prime[k])/(prime[k]+1))) continue;
          
      }

    }
    return 0;
}
