#include <bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)

using namespace std;
using ll=long long;

int n, m, x;
ll cnt[1001];
ll ans=0, res=0;

int main() {
  ioboost;

  cin>>n>>m;

  for(int i=0; i<n; i++) {
    cin>>x;
    res+=x;
    cnt[res%m]++;
  }

  for(int i=0; i<=1000; i++) {
    ans+=cnt[i]*(cnt[i]-1)/2;
  }
  cout<<cnt[0]+ans<<"\n";
  
  return 0;
}