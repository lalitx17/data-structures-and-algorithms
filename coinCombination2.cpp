#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll Nmax = 1000001;
ll comb[Nmax];
ll coins[Nmax];

void solve(ll n, ll x)
{
    ll z = 1000000007;
    comb[0] = 1;
    for (ll c = 0; c < n; c++)
    {
        for (int j = 1; j <= x; j++)
        {

            if (j - coins[c] >= 0)
            {
                comb[j] += comb[j - coins[c]];
                comb[j] %= z;
            }
        }
    }

    cout << comb[x] << endl;
}

int main()
{
    ll n, x;
    cin >> n >> x;
    for (ll i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    solve(n, x);

    return 0;
}