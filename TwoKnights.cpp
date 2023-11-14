#include <iostream>

using namespace std;


int main()
{
    long long n;
    cin >> n;
    cout << "0" << endl;
    for (long long j = 2; j <= n; j++)
    {

        cout << ((j*j*j*j) -j*j)/2 - 4*(j-1)*(j-2) << endl;
    }
    return 0;
}

