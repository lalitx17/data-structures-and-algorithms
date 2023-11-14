#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long mod = 1000000007;

long long powll(int a, int e){
  long long result = 1;
  for (int i = 0; i < e; i++){
      result = (result * a) % mod;
  }
  return result;
}

int main(){
    int c;
    cin >> c;
    cout<< powll(2,c);
    return 0;
}