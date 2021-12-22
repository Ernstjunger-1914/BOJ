#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  ioboost;

  string str;
  
  while(1) {
    getline(cin, str);

    if(str=="") {
      break;
    }
    cout<<str<<"\n";
  }
  return 0;
}