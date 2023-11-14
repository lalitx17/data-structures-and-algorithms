#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, previousNum = 0, currentNum = 0, sum = 0, diff, energy = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
       cin >> currentNum;
       diff = previousNum - currentNum;
       if (diff < 0){
          if (energy + diff < 0){
          sum += (energy + diff);
          energy = 0;
          }else{
          energy += diff;
          }

       }else{
         energy += diff;
       }
       previousNum = currentNum;
    }
    if (sum < 0){
        cout << (-1*sum) << endl;
    }else{
        cout << sum << endl;
    }
   return 0; 
}