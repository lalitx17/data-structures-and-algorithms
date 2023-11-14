#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
	ios::sync_with_stdio(false);cin.tie(0);
	int n,q,i,ans=0;
	cin>>n>>q>>s;
	for (i=2;i<n;i++) if (s[i]=='c'&&s[i-1]=='b'&&s[i-2]=='a') ++ans;
	while (q--)
	{
		int y;char c;
		cin>>y>>c;--y;
		for (i=y;i<min(n,y+3);i++) if (s[i]=='c'&&s[i-1]=='b'&&s[i-2]=='a') --ans;
		s[y]=c;
		for (i=y;i<min(n,y+3);i++) if (s[i]=='c'&&s[i-1]=='b'&&s[i-2]=='a') ++ans;
		cout<<ans<<'\n';
	}
}
//not original.