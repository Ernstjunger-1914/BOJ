#include <bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
using ll=long long;

bool prime[1000001];
string p;
int k;

bool check(int n) {
  int result=0;

  for(int i=0; p[i]; i++) {
    result=(result*10+(p[i]-'0'))%n;
  }

  if(result==0) {
    return true;
  }
  return false;
}

int main() {
  ioboost;

  int ans=0;
  bool isgood=1;
  cin>>p>>k;

  for(int i=2; i<k; i++) {
    if(prime[i]) {
      continue;
    }

    if(check(i)) {
      isgood=0;
      ans=i;
      break;
    }

    for(int j=i*2; j<sqrt(k); j+=i) {
      prime[i]=1;
    }
  }

  if(isgood) {
    cout<<"GOOD\n";
  } else {
    cout<<"BAD "<<ans<<"\n";
  }
  return 0;
}