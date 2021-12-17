#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main() {
  fastio;

  int n, num2=0, num5=0;
  cin>>n;

  for(int i=2; i<=n; i*=2) {
    num2+=n/i;
  }

  for(int i=5; i<=n; i*=5) {
    num5+=n/i;
  }
  cout<<(num2<num5?num2:num5)<<"\n";

  return 0;
}