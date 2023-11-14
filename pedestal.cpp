#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, first, second, third;
        cin >> n;
        second = third = (n/3);
        first = n-second-third;
        if (first-second > 1){
            second++;
            third--;
        }else{
            first++;
            third--;
        }
        cout << second << " " << first << " " << third << endl;
    }
    return 0;
}