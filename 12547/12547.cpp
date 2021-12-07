#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  fastio;

  int t;
  cin>>t;

  for(int i=0; i<t; i++) {
    int  k, c, result=0, sum=0;
    cin>>k>>c;

    while(sum<k*c) {
      result++;
      sum+=sum/k+1;
    }
    cout<<"Case #"<<i+1<<": "<<result<<"\n";
  }
  return 0;
}