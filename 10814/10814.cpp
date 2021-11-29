#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool func(pair<int, string> a, pair<int, string> b) {
  return a.first<b.first;
}

int main() {
  fastio;

  int n;
  cin>>n;
  vector<pair<int, string>> asc(n);

  for(int i=0; i<n; i++) {
    cin>>asc[i].first>>asc[i].second;
  }

  stable_sort(asc.begin(), asc.end(), func);

  for(int i=0; i<n; i++) {
    cout<<asc[i].first<<" "<<asc[i].second<<"\n";
  }
  return 0;
}