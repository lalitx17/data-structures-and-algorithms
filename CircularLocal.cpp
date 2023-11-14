#include <bits/stdc++.h>

using namespace std;
int a[1000000];

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        bool state = true;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(a, a + n);
        for (int j = 1; j < (n/2); j++){
            if (a[j] < a[(n/2)+j-1] && a[j] < a[(n/2)+j]){
                continue;
            }else{
                state = false;
            }
        }

        if (state)
        {
            cout << "YES" << endl;
            for (int j = 0; j < (n / 2); j++)
            {
                cout << a[j] << " " << a[(n / 2) + j] << " ";
            }
            cout << endl;            
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}