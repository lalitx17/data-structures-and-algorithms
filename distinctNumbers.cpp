#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


const int Nmax = 100000;
int a[Nmax];
set<int> s;

int  main(){
    ll q, p;
    cin >> q;

    for (int j = 0; j < q; j++){
        cin >> p;
        s.insert(p);
    }
    cout << s.size() << endl;
    return 0;
}