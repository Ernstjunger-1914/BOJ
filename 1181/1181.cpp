#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool comp(string a, string b) {
  if(a.size()==b.size()) {
    return a<b;
  } else {
    return a.size()<b.size();
  }
}

int main() {
  fastio;

  int n;
  vector <string> Sort;
  string str;
  cin>>n;

  for(int i=0; i<n; i++) {
    string word;
    cin>>word;
    Sort.push_back(word);
  }

  sort(Sort.begin(), Sort.end(), comp);

  for(int i=0; i<n; i++) {
    if(str==Sort[i]) {
      continue;
    }
    cout<<Sort[i]<<"\n";
    str=Sort[i];
  }
  return 0;
}