#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; 
    cin >> t;
    for (int i = 1; i <= t; i++){
        vector<int> candies;
        candies.push_back(0);
        int n,z,indA,indB,sumA,sumB, result;
        indA = 1; result = sumA = sumB = 0;
        cin >> n;
        indB = n;
        for (int j = 1; j <= n; j++){
           cin >> z;
           candies.push_back(z);
        }
        while(indA <= indB){
          if (sumA == sumB && indA != indB){
             sumA += candies[indA];
             indA++;
             sumB += candies[indB];
             indB--;
          }else if(sumA > sumB){
              sumB += candies[indB];
              indB--;
          }else{
              sumA += candies[indA];
              indA++;
          }
          if (sumA == sumB){
              result = (indA-1) + (n - indB);
          }
        }
    cout << result << endl;
    }
    return 0;
}