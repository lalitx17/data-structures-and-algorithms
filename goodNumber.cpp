#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, goodNumber = 0, digit,sum;
    string strA;
    cin >> n >> k;
    int nums[10];
    while(n--){
        sum = 0;
        nums[0] = 0;
        fill(nums, nums+k+1, 0);
        cin >> strA;
        for (int i = 0; i < strA.length(); i++){
             digit = strA[i] - '0';
             if (digit <= k){
                nums[digit] = 1;
             }
        }
        for (int j = 0; j <= k; j++){
            sum += nums[j];
        }

        if (sum == k+1){
            goodNumber++;
        }
    }
    cout << goodNumber << endl;

    return 0;
}