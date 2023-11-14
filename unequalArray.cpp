#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> num;
        int n, a;
        vector<int> v;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            num.push_back(a);
        }
        for (int k = 0; k < n - 1; k++)
        {
            if (num[k] == num[k + 1])
            {
                v.push_back(k);
            }
        }
        if (v.size() <= 1)
        {
            cout << 0 << endl;
        }
        else if(v.back() - v.front() == 1)
        {
           cout << 1 << endl;
        }else{
            cout << v.back() - v.front() - 1 << endl;
        }
    }
    return 0;
}