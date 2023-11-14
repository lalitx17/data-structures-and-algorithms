#include <bits/stdc++.h>

using namespace std;

vector<int> price;
vector<int> page;

int main(){
    int n, x, a;
    cin >> n >> x; 
    for (int i = 0; i < n; i++){
        cin >> a;
        price.push_back(a);
    }
    for (int j = 0; j < n; j++){
        cin >> a;
        page.push_back(a);
    }
    vector<vector<int>> maxPages(n+1, vector<int>(x+1,0));
    for (int k = 0; k < n; k++){
        for (int l = 0; l <= x; l++){
            maxPages[k+1][l] = maxPages[k][l];
            if (l >= price[k]){
                maxPages[k+1][l] = max(maxPages[k+1][l], page[k]+maxPages[k][l-price[k]]); 
            }
        }
    }
    cout << maxPages[n][x] << endl;
    return 0;
}
