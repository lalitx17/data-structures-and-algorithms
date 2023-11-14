#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int l, a[200000], andNum = 0, maxNum = 0;;
    bool state;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
      cin >> a[i];
    }
    for (int k = 0; k < l; k++)
    {
      if (k != a[k])
      {
        andNum = (k & a[k]);
        state = true;
        for (int j = 0; j < l; j++)
        {
          if (j != a[j])
          {
            if ((j & a[j]) != andNum)
            {
              state = false;
              break;
            }
          }
        }
      }
      if (state){
      maxNum = max(maxNum, andNum);
      }

    }
    cout << maxNum << endl;
  }
}