#include <bits/stdc++.h>

using namespace std;

int main(){
    long long M = 1000000007;
    int T;
    cin >> T;
    while(T--){
        int n, k,num, limit;
        vector<long long> v;
        cin >> n >> k;
        num = log2(k);
        limit = (1 << num);
        for (int subsetMask = 0; subsetMask < limit; subsetMask++){
            long long sum = 0; 
            for (int j = 0; j < num; j++){
                if ((subsetMask & (1 << j)) != 0){
                    sum = fmod(sum+pow(n,j), M);
                }
            }
                v.push_back(fmod(sum+pow(n,num), M));
        }
        sort(v.begin(), v.end());
        cout << v[k-pow(2, num)] << endl;
    }
}