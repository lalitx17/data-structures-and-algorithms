#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long trailingZeros(long long n){
    long long result = 1;
    long long trailingZeros = 0;
    for (long long i = 1; i <= (log(n)/log(5)); i++){
         trailingZeros += int(n/pow(5,i));
       }
        return trailingZeros;
    }
 


int main(){
    long long n;
    cin >> n;
    cout << trailingZeros(n);
    return 0;
}