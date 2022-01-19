#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
using ll=long long;

int main() {
  ioboost;

  int s, a, b;
  cin>>s>>a>>b;

  if(s>a) {
    int tmp=s-a;

    if(tmp%b==0) {
      cout<<250+100*(tmp/b)<<"\n";
    } else {
      cout<<250+100*(tmp/b)+100<<"\n";
    }
  } else {
    cout<<250<<"\n";
  }
  return 0;
}