#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll c,d;
		cin>>c>>d;
		ll a=max(c,d),b=min(c,d);
		
		if((a+b)%3==0 && b*2>=a)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
		
	}
}
