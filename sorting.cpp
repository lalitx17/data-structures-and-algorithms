#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[5] = {1,5,2,3,7};
    int temp;
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++){
        for (int j = i; j < (sizeof(a)/sizeof(a[0]))-i; j++){
            if (a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for (auto x: a){
        cout << x << endl;
    }

    
}