#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll t, n;
    cin >> t >> n;
    for (int i = 1; i <= t; i++)
    {
        ll sum = 0;
        for (int j = 1; j <= n; j++)
        {
            sum += 1 + (n - j) * 2;
        }
        for (int k = 1; k <= n; k++)
        {
            
        }

        cout << sum + 1 << endl;
    }
    return 0;
}