#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main() {
  ioboost;

  int n, result=INT_MAX;
  cin>>n;

  for(int i=0; i<n; i++) {
    int x, y, z;
    cin>>x>>y>>z;
    result=min(result, x+y/gcd(y, z)*z);
  }
  cout<<result<<"\n";

  return 0;
}