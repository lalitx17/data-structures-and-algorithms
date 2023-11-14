#include <bits/stdc++.h>
using namespace std;

int T;
int main()
{
    cin >> T;
    while (T--)
    {
        const int x = 100000;
        long long nums[x], n;
        bool state = true;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> nums[i];
        }
        for (int j = 1; j < n; j++)
        {
            if (nums[j + 1] < nums[j])
            {
                if ((nums[j + 1] + nums[j]) % 2 == 1)
                {
                    swap(nums[j], nums[j + 1]);
                }
                else
                {
                    state = false;
                }
            }
            if (!state)
               break;
        }
        if (state)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}