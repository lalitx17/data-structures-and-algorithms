#include <bits/stdc++.h>
using namespace std;

int main()
{
    int firstIndex[26], lastIndex[26], fullList[52], counter = 0, n, x, index;
    string entrance;
    fill_n(firstIndex, 26, 0);
    fill_n(lastIndex, 26, 0);
    fill_n(fullList, 52, 0);
    cin >> n;
    cin >> x;
    cin >> entrance;
    for (int i = 0; i < n; i++)
    {
        index = int(entrance[i]) - 65;
        if (firstIndex[index] == 0)
        {
            counter += 1;
            firstIndex[index] = i + 1;
            lastIndex[index] = i + 1;
        }
        else
        {
            lastIndex[index] = i + 1;
        }
    }
    index = 0;
    for (int j = 0; j < 26; j++)
    {
        if (firstIndex[j] != 0)
        {
            fullList[2 * j] = firstIndex[j];
            fullList[2 * j + 1] = lastIndex[j];
        }
    }
    sort(fullList, fullList + 52);

    for (int k = 0; k <= 51; k++)
    {
        if (fullList[k] != 0)
        {
            {
                for (int l = 0; l < 26; l++)
                {
                    if (firstIndex[l] != 0)
                    {

                        if (fullList[k] == firstIndex[l])
                        {
                            index++;
                            if (index > x)
                            {
                                cout << "YES" << endl;
                                break;
                            }
                        }
                        if (fullList[k] == lastIndex[l])
                        {
                            index--;
                        }
                    }
                }
                if (index > x)
                {
                    break;
                }
            }
        }
    }

    if (index <= x)
    {
        cout << "NO" << endl;
    }
}
