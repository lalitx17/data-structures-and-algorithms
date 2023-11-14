#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; 
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, m,x;
        bool state = false;
        vector<int> subOp;
        cin >> n >> m;
        for (int j = 0; j < n; j++){
            cin >> x;
            subOp.push_back(x);
        }
        sort(subOp.begin(), subOp.end());
        for (int k = 0; k < n; k++){
            int left = k, right = n-1,  mid = 0;
            int prevMid = 0;
            while(left <= right){
                prevMid = mid;
                mid = ceil(float(left + right)/2);
                if (subOp[mid] == subOp[k]+m){
                    state = true;
                    break;
                }else if(subOp[mid] > subOp[k]+m){
                    right = mid; 
                }else{
                    left = mid;
                }
                if (prevMid == mid){
                    break;
                }
            }
            if (state){
                cout << "YES" << endl;
                break;
            }
        }
        if (!state){
            cout << "NO" << endl;
        }   
    }
    return 0;
}