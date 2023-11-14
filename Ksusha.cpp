#include <bits/stdc++.h>

using namespace std;

int main(){
   int a[100000];
   int N;
   int lowest = INT_MAX;
   cin >> N;
   bool state = true;
   for (int i = 0; i < N; i++){
    cin >> a[i];
    if (a[i] < lowest){
        lowest = a[i];
    }
   }
   for (int j = 0; j < N; j++){
    if (a[j] % lowest != 0){
     state = false;
     break;
    }
   }
   if (state){
    cout << lowest << endl;
   }else{
    cout << -1 << endl;
   }
   
}