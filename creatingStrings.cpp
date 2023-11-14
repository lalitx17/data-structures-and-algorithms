#include <bits/stdc++.h>

using namespace std;

set<string> v;

void permuate(string s, int l, int r)
{

    if (l == r){
        v.insert(s);
      }
       
    for (int i = l; i <= r; i++)
    {

        if (i == l || s[i] != s[l])
        {
            swap(s[i], s[l]);

            permuate(s, l + 1, r);

            swap(s[i], s[l]);
        }
    }
}


int main()
{
    string s;
    getline(cin, s);
    permuate(s, 0, s.size()-1);
    cout << v.size() << endl;
    for (auto x : v)
    {
        cout << x << endl;
    }
    return 0;
}