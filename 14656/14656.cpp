#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  ioboost;

  int n, hit=0;
  int num[20001];
  cin>>n;

  for(int i=0; i<n; i++) {
    cin>>num[i];

    if(num[i]!=(i+1)) {
      hit++;
    }
  }
  cout<<hit<<"\n";

  return 0;
}