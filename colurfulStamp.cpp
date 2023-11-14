#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int z = 0; z < t; z++)
    {
        int n, x;
        string r;
        char reqChar;
        cin >> n;
        cin >> r;
        bool state, req;
        state = false;
        req = true;

        for (int i = 0; i < n; i++)
        {
            if (req)
            {
                req = false;
                state = false;
                if (r[i] == 'R')
                {
                    reqChar = 'B';
                }
                else if (r[i] == 'B')
                {
                    reqChar = 'R';
                }else if (r[i] == 'W'){
                     req = true;
                     state = true;
                }
            }
            if (!state)
            {
                if (r[i] == 'W')
                {
                    break;
                }
                if (r[i] == reqChar)
                {
                    state = true;
                }
            }
            if (r[i] == 'W' && state){
                req = true;
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