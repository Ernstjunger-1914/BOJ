#include <bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
using ll=long long;

int a, b, c;

ll func(ll n) {
  if(n==1) {
    return a%c;
  }

  ll k=func(n/2)%c;

  if(n%2!=0) {
    return k*k%c*a%c;
  } else {
    return k*k%c;
  }
}

int main() {
  ioboost;

  cin>>a>>b>>c;
  cout<<func(b)<<"\n";
  
  return 0;
}