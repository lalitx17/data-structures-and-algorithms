#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> bigOne;
    int counter;
    for (int i = 1; i <= 4; i++){
        vector<int> smallOne;
        for (int j = i; j <= 4; j++){
            smallOne.push_back(j);
            bigOne.push_back(smallOne);
        }
    }
    for (auto x: bigOne){
        for (auto y: x){
          cout << y << " " ;
        }
        cout << endl;
    }
    return 0;
}