#include <iostream>
#include <bits/stdc++.h>
#include <map>

using namespace std;

unordered_map<char, int> m;


int main(){
    int count = 0;
    string s, palindrome1,palindrome2, oddbit;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++){
        m[s[i]] += 1; 
    }
    for (auto x: m){
        if (x.second % 2 == 0){
            for (int j = 0; j < (x.second/2); j++){
                palindrome1 = palindrome1+ x.first;
                palindrome2 = x.first + palindrome2;
            }
        }else{
            for (int m = 0; m < x.second; m++)
                  oddbit = oddbit + x.first;
            count++;
        }
    }
    if (count > 1){
        cout << "NO SOLUTION" << endl;
    }else{
        cout << palindrome1 << oddbit << palindrome2 << endl;
    }

    return 0;
}