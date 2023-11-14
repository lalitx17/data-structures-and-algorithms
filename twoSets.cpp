#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long c, totalSum;
    cin >> c;
    vector<long long> setOne = {c};
    totalSum = ((c * (c + 1)) / 2);
    if (totalSum % 2 == 0)
    {
        cout << "YES" << endl;
        long long subtractableTerm = totalSum / 2 - c;
        for (long long i = c - 1; i >= 1; i--)
        {
          if (subtractableTerm <= i){
              if (subtractableTerm != 0)
                 setOne.push_back(subtractableTerm);
              break;
          }else{
              subtractableTerm = subtractableTerm - i;
              setOne.push_back(i);
          }
        }
        cout << setOne.size() << endl;
        for (int j = 0; j < setOne.size();j++){
            cout << setOne[j] << " ";
        }
        cout << endl;
        cout << c - setOne.size() << endl;
        for (int k = 1; k <= c; k++){
            if (find(setOne.begin(), setOne.end(), k) != setOne.end()){
                continue;
            }else{
                cout << k << " ";
            }
        }
    }else{
         cout << "NO";
    }

    return 0;
}