#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, gcdx;
        cin >> n;
        int mocha[n];
        for (int i = 0; i < n; i++)
        {
            cin >> mocha[i];
        }
        sort(mocha, mocha + n);
        bool state = false;
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                gcdx = gcd(mocha[j], mocha[k]);
                if (gcdx <= 2)
                {
                    state = true;
                    break;
                }
            }
            if (state)
            {
                break;
            }
        }
        if (state)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}