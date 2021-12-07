#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  fastio;

  int n, m;
  map<string, string> ms;
  cin>>n>>m;

  for(int i=0; i<n; i++) {
    string url, passwd;
    cin>>url>>passwd;
    ms.insert(pair<string, string>(url, passwd));
  }

  for(int i=0; i<m; i++) {
    string str;
    cin>>str;
    cout<<ms[str]<<"\n";
  }
  return 0;
}