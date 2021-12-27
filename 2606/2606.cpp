#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int n, m, cnt=0;
vector<int> adj_list[101];
bool flag[101];

void func(int n) {
  flag[n]=1;

  for(int i=0; i<adj_list[n].size(); i++) {
    int tmp=adj_list[n][i];

    if(!flag[tmp]) {
      func(tmp);
      cnt++;
    }
  }
}

int main() {
  ioboost;

  cin>>n>>m;

  for(int i=0; i<m; i++) {
    int a, b;
    cin>>a>>b;
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
  }

  func(1);
  cout<<cnt<<"\n";

  return 0;
}