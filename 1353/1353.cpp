#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  fastio;

  int s, p, x=2;
  double pe=0;
  cin>>s>>p;

  if(s==p) {
    return !(cout<<"1\n");
  }

  while(1) {
    double e=pow(1.0*s/x, x);

    if(pe>e) {
      return !(cout<<"-1\n"); 
    } else if(p<=e) {
      return !(cout<<x<<"\n");
    }
    pe=e, x++;
  }
  return 0;
}