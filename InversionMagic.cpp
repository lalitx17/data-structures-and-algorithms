#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        bool state = true;
        bool timeOut = false;
        bool timeOut2 = false;
        string magic;
        cin >> n;
        cin >> magic;
        for (int i = 0; i < (n / 2); i++)
        {
            if (magic[i] != magic[n - 1 - i])
            {
                timeOut = true;
                for (int j = i + 1; j < (n / 2); j++)
                {
                    if (magic[j] == magic[n - 1 - j])
                    {
                        timeOut2 = true;
                        for (int k = j + 1; k < (n / 2); k++)
                        {
                            if (magic[k] != magic[n - 1 - k])
                            {
                                state = false;
                                break;
                            }
                        }
                    }
                    if (timeOut2)
                    {
                        break;
                    }
                }
            }
            if (timeOut)
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