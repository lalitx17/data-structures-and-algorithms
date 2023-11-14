#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


string giveZeros(int x, int y)
{
    string result = "";
    for (int z = 0; z < (y - x); z++)
    {
        result += "0";
    }
    return result;
}

int main()
{
    ll t, n;
    cin >> t;

    for (int j = 1; j <= t; j++)
    {
        cin >> n;
        bool state = false;
        string digi[10000];
        for (int i = 0; i < n; i++)
        {
            cin >> digi[i];
        }
        int total = 0;
        for (int k = 0; k < n - 1; k++)
        {
            if (stoi(digi[k]) < stoi(digi[k + 1]))
                continue;
            string digit1 = digi[k];
            string digit2 = digi[k + 1];
            if (digit1.length() == digit2.length())
            {
                digi[k + 1] = digit2 + "0";
                total++;
                state = true;
            }
            else
            {

                for (int l = 0; l <= digit2.length(); l++)
                {
                    if (int(digit1[l]) < int(digit2[l]))
                    {
                        digi[k + 1] = digit2 + giveZeros(digit2.length() + l, digit1.length());
                        total += digit1.length() - digit2.length() ;
                        state = true;
                        break;
                    }
                    else if ((int)digit1[l] > (int)digit2[l])
                    {
                        digi[k + 1] = digit2 + giveZeros(digit2.length() + l, digit1.length()) + "0";
                        total += digit1.length() - digit2.length() + 1;
                        state = true;
                        break;
                    }
                }
            }
            if (state == false)
            {
                if (digit1[digit1.length() - 1] == '9')
                {
                    digi[k + 1] = digit2 + giveZeros(digit2.length(), digit1.length());
                    total += digit1.length() - digit2.length();
                }
                else
                {
                    digi[k + 1] = to_string(stoi(digit1) + 1);
                    total += digit1.length() - digit2.length();
                }
            }
        }
        cout << "Case #" << j << ": " << total << endl;
    }

    return 0;
}
