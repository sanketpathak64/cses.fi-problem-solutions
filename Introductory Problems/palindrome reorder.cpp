#include<bits/stdc++.h> //failing 1 testcase
using namespace std;
typedef long long ll;
#include<map>
int main()
{
	string a;
	cin>>a;
	
	map<char,ll> aa;
	
	ll n=a.size();
	
	for(ll i=0;i<n;i++)
		aa[a[i]]++;
	ll e=0,o=0;
	
	for (auto x : aa)
	{
		if(x.second % 2 == 0)
			e++;
		else
			o++;
	}
	
	if(o>1)
	{
		cout<<"NO SOLUTION\n";
		return 0;
	}
	string ans1="";
	char aaa;
	string ans2="";
	int f=0;
	for(auto x:aa)
	{
		while(x.second>0 && x.second%2==0)
		{
			ans1+=x.first;
			ans2+=x.first;
			x.second-=2;
		}
		if(x.second==1)
		{
		    f=1;
			aaa=x.first;
		}
	}
	for(ll i=0;i<ans1.size();i++)
	    cout<<ans1[i];
	if(f) cout<<aaa;
	for(ll i=ans2.size()-1;i>=0;i--)
		cout<<ans2[i];
}

