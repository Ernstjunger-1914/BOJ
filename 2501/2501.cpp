#include <bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
using ll=long long;

int main() {
  ioboost;

  int n, k;
  vector<int> vi;
  cin>>n>>k;

  for(int i=1; i*i<=n; i++) {
    if(n%i==0) {
      vi.push_back(i);
      if(i*i!=n) {
        vi.push_back(n/i);
      }
    }
  }

  if(vi.size()>=k) {
    sort(vi.begin(), vi.end());
    cout<<vi[k-1]<<"\n";
  } else {
    cout<<0<<"\n";
  }
  return 0;
}