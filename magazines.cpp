#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, a[200001], sumTotal = 0;
        string b;
        cin >> n;
        cin >> b;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        if (b[0] == '1')
        {
            sumTotal += a[0];
        }
        for (int k = 1; k < n; k++)
        {
            if (b[k] == '1' && b[k - 1] == '0' && a[k - 1] > a[k])
            {
                sumTotal += a[k - 1];
                b[k] = '0';
            }
            else if (b[k] == '1' && a[k - 1] < a[k])
            {
                sumTotal += a[k];
            }
        }

        cout << sumTotal << endl;
    }
}