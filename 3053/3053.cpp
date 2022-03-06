#include <bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
using ll=long long;

const double pi=3.14159265359;

int main() {
  ioboost;

  int r;
  double res1=0.0, res2=0.0;
  cin>>r;

  res1=(double)r*r*pi;
  res2=(double)r*r*2;
  cout.precision(6);
  cout<<fixed<<res1<<"\n"<<res2<<"\n";
    
  return 0;
}