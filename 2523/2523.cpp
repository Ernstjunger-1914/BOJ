#include <bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)

using namespace std;
using ll=long long;

int main() {
  ioboost;

  int n;
  cin>>n;

  for(int i=0; i<n; i++) {
    for(int j=0; j<=i; j++) {
      cout<<"*";
    }
    cout<<"\n";
  }

  for(int i=n-1; i>0; i--) {
    for(int j=0; j<i; j++) {
      cout<<"*";
    }
    cout<<"\n";
  }
  return 0;
}