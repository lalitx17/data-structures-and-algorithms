#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, a[200000], ctr = 0, ind = 0, indx = 0, lowest = INT_MAX;
        bool state = true;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] < lowest)
            {
                ind = i;
                lowest = a[i];
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (j >= ind)
            {
                indx = ind;
                state = false;
                for (int x = indx; x < n - 1; x++)
                {
                    if (a[x + 1] < a[x])
                    {
                        state = true;
                        break;
                    }
                }
                if (!state)
                {
                    break;
                }

                lowest = INT_MAX;
                for (int k = indx + 1; k < n; k++)
                {
                    if (a[k] < lowest)
                    {
                        ind = k;
                        lowest = a[k];
                    }
                }
            }

            if (a[j] > lowest)
            {
                ctr++;
            }
        }
        cout << ctr << endl;
    }
    return 0;
}