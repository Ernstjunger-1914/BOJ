#include <bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
using ll=long long;

int main() {
  ioboost;

  int n, m, res=0, cnt=0, min=-1;
  cin>>m>>n;

  for(int i=m; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      if(i%j==0) {
        cnt++;
      }
    }
    if(cnt==2) {
      if(min==-1) {
        min=i;
      }
      res+=i;
    }
    cnt=0;
  }

  if(min==-1) {
    cout<<-1<<"\n";
  } else {
    cout<<res<<"\n"<<min<<"\n";
  } 
  return 0;
}