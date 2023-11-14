# include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string x, result = "";
    cin >> N;
    x = "abcd";
    if (N > 1 && N < 5){
        for (int i = 0; i < N; i++){
            result += x[i];
        }
    } else if (N > 4 && N < 8){
        result = x;
        for (int i = 0; i < N-4; i++){
            result += x[i];
        }
    }else{
        for (int i = 0; i < (N/4); i++){
            result += x;
        }
        for (int j = 0; j < N-((N/4)*4); j++){
            result += x[j];
        }
    }

    cout << result << endl;
}