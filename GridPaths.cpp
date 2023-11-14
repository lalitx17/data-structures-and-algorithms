#include <bits/stdc++.h>

using namespace std;

int dp[1001][1001];

int main(){
    int n;
    int MOD = 1000000007;
    cin >> n; 
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            char a;
            cin >> a;
            if (a == '.'){
              dp[i][j] = (dp[i-1][j]+dp[i][j-1]) % MOD;
              if ((i == 1) && (j == 1)){
                  dp[i][j] = 1;
              }
            }else{
                dp[i][j] = 0;
            }
        }
    }
    cout << dp[n][n] << endl;
    return 0;
}