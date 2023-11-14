#include <iostream>

using namespace std;

int moonsAndUmbrellas(int x, int y, string s){
 char previousChar;
 int totalCost;
 previousChar = s[0];
    for(int k = 1; k < s.length(); k++){
     if (s[k] == 'c'){
       if (previousChar = 'j'){
          totalCost += x;
          previousChar = 'c';
       }
     }else if(s[k] == 'j'){
       if (previousChar = 'c'){
           totalCost += y;
           previousChar = 'j';
       }
     } else if (s[k] == '?'){
         if (previousChar == 'c' && s[k+1] == 'c'){
             previousChar = 'c';
         }else if (previousChar == 'j' && s[k+1] == 'j'){
             previousChar = 'j';
         }else if (previousChar == 'j' && s[k+1] == 'c'){
             previousChar = 'c';
             totalCost += y;
         }else if (previousChar == 'c' && s[k+1] == 'j'){
             previousChar = 'j';
             totalCost += x;
         }
     }
     }
     return totalCost;
    }

int main(){
    int t,x,y;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> x;
        cin >> y;
        getline(cin, s);
        cout << moonsAndUmbrellas(x,y,s) << endl;
    }
    return 0;
}