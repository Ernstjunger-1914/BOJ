#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool func(pair<int, int> a, pair<int, int> b) {
  if(a.second==b.second) {
    return a.first<b.first;
  } else {
    return a.second<b.second;
  }
}

int main() {
  fastio;

  int a, b, n, cnt=1;
  vector<pair<int, int>> vpn;
  cin>>n;

  for(int i=0; i<n; i++) {
    cin>>a>>b;
    vpn.push_back({a, b});
  }

  sort(vpn.begin(), vpn.end(), func);
  int time=vpn[0].second;

  for(int i=1; i<n; i++) {
    if(time<=vpn[i].first) {
      cnt++;
      time=vpn[i].second;
    }
  }
  cout<<cnt<<"\n";
  
  return 0;
}