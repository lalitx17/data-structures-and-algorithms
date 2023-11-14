#include <iostream>

using namespace std;

void numberSpiral(long long r, long long c){
    if (r >= c){
        if (r % 2 == 0){
           cout << (r*r)-c+1;
        }else{
           cout << ((r-1)*(r-1))+c;
        }
    }else{
        if (c%2 == 0){
            cout << ((c-1)*(c-1))+r;
        }else{
            cout << (c*c)-r+1;
        }
    } 
 cout << endl;
} 


int main(){
    long long t,r,c;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> r >> c;
        numberSpiral(r,c);
    }
    return 0;
}