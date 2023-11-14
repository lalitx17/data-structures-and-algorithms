#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, D, remainingPlayer, teams = 0, number = 0; 
    int a[100000];
    cin >> N >> D;
    remainingPlayer = N;
    for (int i = 0; i < N; i++){
        cin >> a[i];
    }
    sort(a, a+N);
    for (int j = N-1; j >= 0; j--){
       number = ceil((float)D/a[j]);
       if (number*a[j] == D){
        number++;
       }
       if (remainingPlayer >= number){
        teams++;
        remainingPlayer -= number;
       }else{
        break;
       }
    }

    cout << teams << endl; 
}