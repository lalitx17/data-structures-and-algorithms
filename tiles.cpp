// https://codeforces.com/problemset/problem/1851/C
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, forwardIndex, backwardIndex, sum = 1;
        int c[500000];
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        for (int j = n - 2; j >= 0; j--)
        {
            if (k == 1)
            {
                backwardIndex = n - 1;
                break;
            }

            if (c[j] == c[n - 1])
            {
                sum += 1;
            }

            if (sum == k)
            {
                backwardIndex = j;
                break;
            }
        }
        if (sum != k)
        {
            cout << "NO" << endl;
            continue;
        }
        sum = 1;

        for (int i = 1; i < n; i++)
        {
            if (k == 1)
            {
                forwardIndex = 0;
                break;
            }

            if (c[i] == c[0])
            {
                sum += 1;
            }

            if (sum == k)
            {
                forwardIndex = i;
                break;
            }
        }
        if (sum != k)
        {
            cout << "NO" << endl;
            continue;
        }

        if (c[0] == c[n - 1])
        {
            cout << "YES" << endl;
            continue;
        }

        if (backwardIndex > forwardIndex)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
    }
}