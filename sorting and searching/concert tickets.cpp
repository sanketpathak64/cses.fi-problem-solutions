#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() 
{
  ll n, m, x;
  cin >> n >> m;
  multiset<ll, greater<ll>> h;
  while (n--) 
  {
    cin >> x;
    h.insert(x);
  }
  while (m--) 
  {
    cin >> x;
    auto it = h.lower_bound(x);
    if (it == h.end()) cout << "-1\n";
    else {
      cout << *it << endl;
      h.erase(it);
    }
  }
}
