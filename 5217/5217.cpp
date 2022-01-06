#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  ioboost;

  int t;
  cin>>t;

  while(t--) {
    int n;
    cin>>n;

    cout<<"Pairs for "<<n<<": ";

    for(int i=1; i<=n/2; i++) {
      if(i!=n-i) {
        if(i!=1) {
          cout<<", ";
        }

        cout<<i<<" "<<n-i;
      }
    }
    cout<<"\n";
  }
  return 0;
}