#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, lowest = INT_MAX, count = 0;
    int a[200000];
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> a[i];
    }
    sort(a, a+N);
    for (int i = 0; i < N-1; i++){
        if ((a[i+1]-a[i]) < lowest){
            lowest = a[i+1]-a[i];
            count = 1;
        }else if ((a[i+1]-a[i]) == lowest){
            count++;
        }
    }
    cout << lowest << " " << count << endl;

}
