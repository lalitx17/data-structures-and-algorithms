#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string space;
        getline(cin, space);
        int n, m, x, w, sum = 0;
        cin >> n;
        cin >> m;
        int weight[m];
        map<int, int> wx, xi;
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            cin >> w;
            weight[i] = w;
            wx[x] = w;
            xi[x] = i + 1;
        }
        sort(weight, weight + m);
        int numberLine[2 * n];
        bool state = false;
        fill_n(numberLine, 2 * n, 1000000001);
        for (int j = 0; j < 2 * n; j++)
        {
            state = false;
            sum += weight[j];
            int key = 0;
            for (auto &u : wx)
            {
                if (u.second == weight[j])
                {
                    key = u.first;
                    for (int k = 0; k < j; k++)
                    {
                        if (key == numberLine[k])
                        {
                            break;
                        }
                        if (k == j - 1)
                        {
                            state = true;
                        }
                    }
                    if (state)
                    {
                        break;
                    }
                }
            }

            numberLine[j] = key;
        }
        sort(numberLine, numberLine + 2 * n);
        cout << sum << endl;
        for (int i = 0; i < n; i++)
        {
            cout << xi[numberLine[i]] << " " << xi[numberLine[2 * n - 1 - i]] << endl;
        }
    }
}