#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  fastio;

  int t;
  cin>>t;

  for(int i=0; i<t; i++) {
    int k, n;
    string str;
    multiset<int> m;
    cin>>k;

    for(int j=0; j<k; j++) {
      cin>>str>>n;

      if(str=="I") {
        m.insert(n);
      } else {
        if(m.empty()) {
          continue;
        }

        if(n==1) {
          m.erase(--m.end());
        } else {
          m.erase(m.begin());
        }
      }
    }
    if(m.empty()) {
      cout<<"EMPTY\n";
    } else {
      cout<<*(--m.end())<<" "<<*(m.begin())<<"\n";
    }
  }
  return 0;
}