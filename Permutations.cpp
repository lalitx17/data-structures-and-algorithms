#include <iostream>
using namespace std;

int n; 



int main(){
    cin >> n;
    if (n == 1)
      cout << 1;
    else if (n> 1 && n < 4) 
     cout << "NO SOLUTION";
     else if (n == 4)
     cout << "3 1 4 2";
     else{
         for (int i = 1; i <= n; i += 2){
             cout << i << " " ;
         }
         for (int k = 2; k <= n; k += 2){
             cout << k << " ";
         }
     }
    return 0;
}