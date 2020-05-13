#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll i;
	cin>>i;
	int n=1;
	while(n<=i)
	{
		
		cout<<(long long)n*n*(n*n-1)/2 - 4*(n-1)*(n-2)<<endl;
		n++;
	}
}
