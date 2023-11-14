#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int Nmax = 1000001;
string binDigits[Nmax];

int main()
{
    string digits = "";
    int n, count = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        digits += "0";
    }
    binDigits[0] = digits;
    while (count <= n)
    {
        for (int j = 1; j <= (pow(2, count)) / 2; j++)
        {
            digits = binDigits[int(pow(2, count - 1)) - j];
            digits[n - count] = '1';
            binDigits[int(pow(2, count - 1)) + j - 1] = digits;
        }
        count++;
    }
    for (int k = 0; k < pow(2,n); k++)
    {
        cout << binDigits[k] << endl;
    }
    return 0;
}