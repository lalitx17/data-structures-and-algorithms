#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    const int *pX = &x;
    int &rX = x;

    cout << "x= " << x << endl;
    cout << "pX= " << pX << endl;
    cout << "deReferenced pX=" << *pX << endl;
    cout << "rX= " << rX << endl;
}