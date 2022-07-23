#include <bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)

using namespace std;
using ll=long long;

int main() {
  ioboost;

  int n, k, index=0;
  ll ans=0;
  priority_queue<int> pqi;
  cin>>n>>k;

  vector<pair<int, int>> vpi(n);
  vector<int> vi(k);

  for(int i=0; i<n; i++) cin>>vpi[i].first>>vpi[i].second;
  sort(vpi.begin(), vpi.end());

  for(int i=0; i<k; i++) cin>>vi[i];
  sort(vi.begin(), vi.end());

  for(int i=0; i<k; i++) {
    while(index<n&&vpi[index].first<=vi[i]) {
      pqi.push(vpi[index++].second);
    }

    if(!pqi.empty()) {
      ans+=(ll)pqi.top();
      pqi.pop();
    }
  }
  cout<<ans<<"\n";
  
  return 0;
}