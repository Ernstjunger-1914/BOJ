#include <bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
using ll=long long;

int main() {
  ioboost;

  int n, m;
  cin>>n>>m;
  int res=m, t=m;

  for(int i=0; i<n; i++) {
    int _i, o;
    cin>>_i>>o;
    t+=(_i-o);

    if(t<0) {
      cout<<0<<"\n";

      return 0;
    }
    res=max(t, res);
  }
  cout<<res<<"\n";
  
  return 0;
}