#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  fastio;

  int n, m, k, result;
  cin>>n>>m>>k;

  result=min(m, k)+min(n-m, n-k);
  cout<<result<<"\n";

  return 0;
}