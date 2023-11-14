#include <bits/stdc++.h>

using namespace std;


int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, ctr = 0, evenNumber = 0, minEven = INT_MAX;
        int a[200000];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int j = 0; j < n; j++)
        {
            if (a[j] % 2 == 0)
            {
                evenNumber++;
                minEven = min(minEven, a[j]);
            }
        }
        while (minEven % 2 == 0)
        {
            minEven /= 2;
            ctr++;
        }
        if (evenNumber == 1)
        {
            cout << ctr << endl;
        }
        else if (evenNumber > 1)
        {
            cout << ctr + evenNumber - 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}