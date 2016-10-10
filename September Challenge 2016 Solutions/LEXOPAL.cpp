#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t; cin>>t;
	while(t--)
	{
		string s; cin>>s;ll n=s.size();
		ll i=0,j=s.size()-1; ll f=0;
		for(;i<n/2;i++,j--)
		{
			if(s[i]!='.'&&s[j]!='.')
			{
				if(s[i]==s[j]) continue;
				else {f=1; break;}
			}
			else if(s[i]=='.'&&s[j]!='.')
			{
				s[i]=s[j];
			}
			else if(s[i]!='.'&&s[j]=='.')
			{
				s[j]=s[i];
			}
			else if(s[i]=='.'&&s[j]=='.')
			{
				s[i]='a';s[j]='a';

			}
		}
		if(f==1)
		{
			cout<<"-1\n";continue;
		}
		else {
			if(s.size()%2!=0)
			{
				if(s[n/2]=='.') s[n/2]='a';
			}
			cout<<s<<"\n";
		}
	}
	return 0;
}
