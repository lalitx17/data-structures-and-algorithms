#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(){
    ll q, k;
    cin >> q;
    for (int i = 0; i < q; i++){
      for (int j = 1; j < 3600; j++){
        k = j;
        ll  count = 1, remainder = 0, answer = 0;
		double divisor;
        string s;
        while(k > (count)*(pow(10, count)-pow(10, count-1))){
         k = k - (count)*(pow(10, count)-pow(10, count-1));
         count++;
        }
        divisor = (double)k/count;
        remainder = k % count;
        answer = ll(pow(10, count-1) + divisor);
        s = to_string(answer);

         if (remainder == 0){
             cout << s[count-1] << endl;
         }else{
             cout << s[remainder-1];
         }
         
      }

    }

    return 0;
}
