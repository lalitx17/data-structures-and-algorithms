#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll Nmax = 1000001;
ll coins[Nmax];
ll value[Nmax];
bool ready[Nmax];

ll solve(ll n, ll m)
{
  if (m < 0) return 100000000;
  if (m == 0) return 0;
  if (ready[m]) return value[m];
  ll best = 100000000;
  for (ll j = 0; j < n; j++){
          best = min(best, solve(n,m-coins[j])+1);
  }
  ready[m] = true;
  value[m] = best;
  return best;
}

int main()
{

    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    ll result = solve(n, m);
    if (result == 100000000){
      cout << -1 << endl;
    }else{
      cout << result << endl;
    }
    return 0;
}