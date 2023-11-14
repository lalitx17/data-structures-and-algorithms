#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long acc = 0;
    cin >> n;
    while(n > 0){
      int MaxDigit = 0;
      string numbers = to_string(n);
      for (unsigned int i = 0; i < numbers.length(); i++){
          int x = (int)numbers[i] - 48;
        MaxDigit = max(MaxDigit, x);
      }
      n -= MaxDigit;
      acc++;
    }
    cout << acc << endl;
    return 0;
}