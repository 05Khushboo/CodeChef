#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t; cin>>t;
	while(t--)
	{
	ll n; cin>>n;
	map<ll,ll> m[1001];
	ll b[10001];
	for(ll i=1;i<=n;i++)
	{
		ll c;cin>>c; b[i]=c;
		while(c--)
		{
			ll a; cin>>a;
			if(m[i].find(a)==m[i].end()) m[i][a]=1;
			else m[i][a]++;
		}
	} ll a[10001]; vector<ll> v;
		for(ll i=1;i<=n;i++)
	{ a[i]=b[i];
for(ll j=0;j<6;j++)
{
	if(m[i].find(j+1)!=m[i].end()) v.push_back(m[i][j+1]);
	else v.push_back(0);
}
//for(ll j=0;j<6;j++) cout<<v[j]<<" ";
sort(v.begin(),v.end());
//for(ll j=0;j<6;j++) cout<<v[j]<<" ";
if(v[0]>0)
{
	a[i]+=v[0]*4;
	for(ll p=1;p<v.size();p++) {v[p]=v[p]-v[0];}
//	for(ll j=0;j<6;j++) cout<<v[j]<<" ";
}
if(v[1]>0)
{	a[i]+=v[1]*2;
	for(ll j=2;j<6;j++) v[j]-=v[1];

}
if(v[2]>0)
{	a[i]+=v[2]*1;
	for(ll j=3;j<6;j++) v[j]-=v[2];

}
//for(ll j=0;j<6;j++) cout<<v[j]<<" ";
while(!v.empty())
	{
		v.pop_back();
	}

	} ll mx=-1,o=0,k=0;

	for(ll i=1;i<=n;i++)
	{
		if(a[i]>mx)
		{
			mx=a[i];o=1;k=i;
		}
		else if(a[i]==mx)
		{
			o++;
		}

	}

	if(o>1)
	{
		cout<<"tie\n"; continue;
	}
	else if(k==1)
	{
		cout<<"chef\n"; continue;
	}
	else {
		cout<<k<<"\n"; continue;
	}

	}
	return 0;
}
