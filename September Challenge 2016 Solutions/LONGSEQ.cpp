#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t; cin>>t;
	while(t--)
	{
		string s;cin>>s; ll a=0,b=0;
		for(ll i=0;i<s.size();i++)
		{
			if(s[i]=='0') a++;
			else if(s[i]=='1') b++;
		}
		if(s.size()==1)
		{
			cout<<"Yes\n"; continue;
		}
		else {
			if(b==0) cout<<"No\n";
			else if(a==0) cout<<"No\n";
			else if(b==1) cout<<"Yes\n";
			else if(a==1) cout<<"Yes\n";
			else cout<<"No\n";
		}

	}
	return 0;
}
