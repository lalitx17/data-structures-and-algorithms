#include <iostream>

using namespace std;

int main()
{
    long long t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a % 2 == 0)
        {
            if (b >= (a / 2) && b <= 2 * a)
            {
                if ((b - (a / 2)) % 3 == 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (b >= (a / 2) + 2 && b <= (2*a))
            {
                if ((b - 2 - (a / 2)) % 3 == 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}