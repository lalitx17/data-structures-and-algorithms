#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[10] = {4,2,55,10,8,9,3,0,14,19};
    map<int, int> x;

    for (int i = 0; i < 10; i++){  // looping through the array
        if (x[a[i]] == 1){          // seeing if the value is 1. True means the element already exist.
            cout << "True" << endl;
            break;
        }else{
            x[a[i]] = 1;           //  adding value 1 if condition is false.
        }
    }

    }