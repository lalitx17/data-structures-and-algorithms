#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k, sum = 0, previousInd = 0, newInd = 0;
        string text;
        char specialChar[30];
        cin >> n;
        cin.ignore();
        getline(cin, text);
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            cin >> specialChar[i];
        }

        for (int j = 1; j < n; j++)
        {
            for (int l = 0; l < k; l++)
            {
                if (specialChar[l] == text[j])
                {
                    newInd = j;
                    if (previousInd != 0){
                        if ((previousInd - sum) >= (newInd-previousInd)){
                            sum += newInd-previousInd;
                        }else{
                            sum += previousInd - sum;
                        }
                    }
                    break;
                }
            }
            previousInd = newInd;
        }
        cout << newInd - sum << endl;
    }
    return 0;
}