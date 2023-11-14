#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int typeJoke[4], totalJoke = 0, remaining = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> typeJoke[i];
        }
        totalJoke += typeJoke[0];
        if (typeJoke[0] == 0)
        {
            cout << 1 << endl;
            continue;
        }
        if (typeJoke[1] <= typeJoke[2])
        {
            totalJoke += 2 * typeJoke[1];
            if ((typeJoke[2] - typeJoke[1]) >= typeJoke[0])
            {
                totalJoke += typeJoke[0];
                remaining = 0;
                if (typeJoke[3] == 0 && ((typeJoke[2] - typeJoke[1]) > typeJoke[0]))
                {
                    totalJoke += 1;
                }
            }
            else
            {
                totalJoke += (typeJoke[2] - typeJoke[1]);
                remaining = typeJoke[0] - (typeJoke[2] - typeJoke[1]);
            }
        }
        else
        {
            totalJoke += 2 * typeJoke[2];
            if ((typeJoke[1] - typeJoke[2]) >= typeJoke[0])
            {
                totalJoke += typeJoke[0];
                remaining = 0;
                if (typeJoke[3] == 0 && ((typeJoke[1] - typeJoke[2]) > typeJoke[0]))
                {
                    totalJoke += 1;
                }
            }
            else
            {
                totalJoke += (typeJoke[1] - typeJoke[2]);
                remaining = typeJoke[0] - (typeJoke[1] - typeJoke[2]);
            }
        }

        if (typeJoke[3] >= remaining + 1)
        {
            totalJoke += remaining + 1;
        }
        else
        {
            totalJoke += typeJoke[3];
        }

        if (totalJoke == 0)
        {
            totalJoke += 1;
        }

        cout << totalJoke << endl;
    }
}