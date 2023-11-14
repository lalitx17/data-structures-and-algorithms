#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; 
    cin >> T;
    while(T--){
        int n, r, b,ctr = 0, s1, step; 
        string result = "";
        cin >> n;
        cin >> r;
        cin >> b; 
        step = (r/(b+1));
        s1 = n;
        if (n-b*(step+1) > step+1){
         s1 = ((step+2)*b - n)*(step+1);
         if (s1 < 0){
             s1 = n;
             step++;
         }
        }

        for (int i = 1; i <= s1; i++){
            if (i % (step+1) == 0 && ctr < b){
                result += "B";
                ctr++;
            }else{
                result += "R";
            }
        }
        for (int j = 1; j <= (n-s1); j++){
            if (j % (step+2) == 0 && ctr < b){
                result += "B";
                ctr++;
            }else{
                result += "R";
            }
        }
        cout <<  result << endl;
    }
    return 0;

}