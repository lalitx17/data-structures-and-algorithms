#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, a[100000], b[100000], difference = 0;
        bool state = true;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            difference = max(difference, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int j = 0; j < n; j++)
        {
            if (b[j] != 0)
            {
                difference = a[j] - b[j];
                break;
            }
        }
        if (difference < 0){
            cout << "NO" << endl;
            continue;
        }
            for (int k = 0; k < n; k++)
            {
                if (b[k] == 0)
                {
                    if (a[k] - b[k] > difference)
                    {
                        state = false;
                        break;
                    }
                }
                else
                {
                    if (a[k] - b[k] != difference)
                    {
                        state = false;
                        break;
                    }
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
    return 0;
}