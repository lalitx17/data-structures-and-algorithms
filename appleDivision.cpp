#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int Nmax = 100000;
int a[Nmax];

int main(){
  ll n, localDifference = 0, globalDifference, totalSum = 0;
  cin >> n; 
  for (ll i = 0; i < n; i++){
      cin >> a[i];
  }
  totalSum = accumulate(a, a+n, totalSum);
  globalDifference = totalSum;
  for (ll j = 0; j < (1<<n); j++){
      ll sum = 0;
    for (ll k = 0; k < n; k++){
        if ((j & (1<<k)) != 0){
             sum = sum + a[k];
             localDifference = abs(totalSum - sum - sum);
             globalDifference = min(globalDifference, localDifference);
        }
    }
  }
   cout << globalDifference << endl;
    return 0;
}