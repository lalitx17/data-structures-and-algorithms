#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t >> n;
    for (int i = 1; i <= t; i++)
    {
        vector<string> v;
        vector<bool> onEdge;
        vector<int> alphabet;
        string text;

        for (int j = 1; j <= n; j++)
        {
            cin >> text;
            v.push_back(text);
        }
        for (int k = 1; k <= n; k++)
        {
            text = v[k];
            char previousChar;
            for (unsigned int l = 0; l < text.size(); l++)
            {
                if (alphabet[int(text[l]) - 64] == 0 || previousChar == text[l])
                {
                    alphabet[int(text[l]) - 64] += 1;
                    if (l == 0 || l == text.size())
                    {
                        onEdge[int(text[l]) - 64] = true;
                    }
                }else{
                    

                }
                previousChar = text[l];
            }
          
        }
    }
    return 0;
}