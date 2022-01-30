#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
using ll=long long;

int main() {
  ioboost;

  int n, x, c1=0, c2=0;
  cin>>n;

  while(n--) {
    cin>>x;

    if(x!=1) {
      c2++;
    } else {
      c1++;
    }
  }
  cout<<(c1<c2?c1:c2)<<"\n";

  return 0;
}