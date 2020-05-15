//#include<bits/stdc++.h>
//typedef long long int ll; //runtime error for 1 testcase
//using namespace std;
//ll a[2000000]={0};
//int main()
//{
//	ll t;
//	cin>>t;
//	while(t--)
//	{
//		ll x,y;
//		cin>>x>>y;
//		a[x]+=1;
//		a[y+1]-=1;		
//	}
//	for(ll i=1;i<2000000;i++)
//	{
//		a[i]+=a[i-1];
//	}
//	ll m=a[0];
//	for(ll i=1;i<2000000;i++)
//	{
//		m=max(m,a[i]);
//	}
//	cout<<m;
//}
#include <bits/stdc++.h> //not mine
#define ll long long
using namespace std;
int main() {

	// 2 3 5
	// 4 8 9

	ll n, x, y;
	cin >> n;	
	vector<ll> a, b;
	for(ll i = 0; i < n; i++) {
		cin >> x >> y;
		a.push_back(x);
		b.push_back(y);
	} 
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	ll i = 0, j = 0, p = 0, val = 0;
	while(1) {
		if(a[i] <= b[j]) {
			p++;
			i++;
		}
		else if(b[j] < a[i]) {
			p--;
			j++;
		}
		val = max(val, p);
		if(i == n) break;
	}

	cout << val << "\n";

	return 0;
}
