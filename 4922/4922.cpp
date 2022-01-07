#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  ioboost;

  int n, result=0;
  cin>>n;

  while(n!=0) {
    if(n!=1) {
      result=n*n;
      result-=(n-1);
    } else {
      result=1;
    }

    cout<<n<<" => "<<result<<"\n";
    cin>>n;
  }
  return 0;
}