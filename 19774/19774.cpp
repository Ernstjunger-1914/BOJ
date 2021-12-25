#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  ioboost;

  int n;
  cin>>n;

  for(int i=0; i<n; i++) {
    string str;
    cin>>str;
    int a=stoi(str.substr(0, 2)), b=stoi(str.substr(2, 4));

    if((a*a+b*b)%7!=1) {
      cout<<"NO\n";
    } else {
      cout<<"YES\n";
    }
  }
  return 0;
}