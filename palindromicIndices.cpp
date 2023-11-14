#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int l = 0, count = 0;
        string s;
        char middle;
        cin >> l;
        cin.ignore();
        getline(cin, s);
        middle = s[l/2];
        for (int i = l/2; s[i] == middle; i--){
            count++;
        }
        for (int i = l/2; s[i] == middle; i++){
            count++;
        }
        cout << count-1 << endl;
    }
}