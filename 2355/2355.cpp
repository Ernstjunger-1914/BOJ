#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)

using namespace std;

int main() {
  fastio;
    
  long long a, b;
  cin>>a>>b;
    
  if(a<=b) {
      cout<<(b-a+1)*(b+a)/2<<"\n";
  } else {
      cout<<(a-b+1)*(b+a)/2<<"\n";
  }
  return 0;
}
