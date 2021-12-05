#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define mod 1000000007

using namespace std;
using matrix=vector<vector<long long>>;

long long n;

matrix func(matrix& x, matrix& y) {
  matrix z(2, vector<long long>(2));

  for(int i=0; i<2; i++) {
    for(int j=0; j<2; j++) {
      for(int k=0; k<2; k++) {
        z[i][j]+=x[i][k]*y[k][j];
      }
      z[i][j]%=mod;
    }
  }
  return z;
}

int main() {
  fastio;

  matrix ans={{0, 1}, {1, 0}};
  matrix a={{1, 1}, {1, 0}};
  cin>>n;

  while(n>0) {
    if(n&1) {
      ans=func(a, ans);
    }

    a=func(a, a);
    n/=2;
  }
  cout<<ans[0][0]<<"\n";

  return 0;
}