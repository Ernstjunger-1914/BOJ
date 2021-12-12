#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  fastio;

  string str;
  cin>>str;

  sort(str.begin(), str.end(), greater<char>());
  cout<<str<<"\n";

  return 0;
}