#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin>>n;
	ll c=0;
	for(ll i=5;n/i>0;i*=5)
		c+=n/i;
	cout<<c;
}
