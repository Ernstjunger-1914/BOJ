#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  fastio;

  int n, k, ex=1;
  int ans[5500];
  bool s[5500];
  cin>>n>>k;
  int index=1, tmp=n;

  memset(ans, -1, sizeof(ans));

  while(k) {
    if(tmp-1<=k) {
      k-=tmp-1;
      ans[index++]=tmp;
      s[tmp]=1;
    }
    tmp--;
  }

  for(int i=1; i<=n; i++) {
    if(ans[i]!=-1) {
      continue;
    }

    while(s[ex]) {
      ex++;
    }

    ans[i]=ex++;
  }

  for(int i=1; i<=n; i++) {
    cout<<ans[i]<<" "[i==n];
  }
  cout<<"\n";

  return 0;
}