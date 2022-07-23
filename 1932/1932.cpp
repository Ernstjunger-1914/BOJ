#include <bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)

using namespace std;
using ll=long long;

int dp[505][505]={};

int main() {
  ioboost;

  int n;
  cin>>n;

  for(int i=0; i<n; i++) {
    for(int j=0; j<i+1; j++) {
      cin>>dp[i][j];
    }
  }

  for(int i=n-1; i>=1; i--) {
    for(int j=0; j<i; j++) {
      dp[i-1][j]+=max(dp[i][j], dp[i][j+1]);
    }
  }
  cout<<dp[0][0]<<"\n";
  
  return 0;
}