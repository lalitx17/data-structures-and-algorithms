#include <iostream>

using namespace std;


const long long Nmax = 5000000;
long long arr[Nmax], n;

long long increasingArray(){
   long long increasedValue = 0;
   for (int k = 0; k < n-1; k++){
     if (arr[k] > arr[k+1]){
       increasedValue += arr[k] - arr[k+1];
       arr[k+1] = arr[k];
     }

   }
   return increasedValue;
}

int main(){
 
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << increasingArray() << endl;
    return 0;
}