#include <iostream>
#include <string>

using namespace std;

string nesting(int n, string s){
    for (int z = 0; z < n; z++){
        s = "(" + s + ")";
    }
    return s;
}

int main(){
    int t;
    string digits, result,tmpString;
    cin >> t;
    for (int i = 1; i <= t; i++){
        getline(cin, digits);
        tmpString.push_back(digits[0]);
        result = nesting(digits[0], tmpString);
        cout << result;
        // for (int i = 1; i <= digits.length(); i++){
         
        // }
    }

    return 0;

}