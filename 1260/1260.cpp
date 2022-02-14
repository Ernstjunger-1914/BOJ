#include <bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)

using namespace std;

typedef long l;
typedef long long ll;
typedef size_t st;

int n, m, v;
int _map[1001][1001];
bool flag[1001];
queue<int> qi;

void reset() {
  for(int i=1; i<=n; i++) {
    flag[i]=0;
  }
}

void bfs(int _v) {
  qi.push(_v);
  flag[_v]=1;
  cout<<_v<<" ";

  while(!qi.empty()) {
    _v=qi.front();
    qi.pop();

    for(int i=1; i<=n; i++) {
      if(_map[_v][i]==1&&!flag[i]) {
        qi.push(i);
        flag[i]=1;
        cout<<i<<" ";
      }
    }
  }
}

void dfs(int _v) {
  flag[_v]=1;
  cout<<_v<<" ";

  for(int i=1; i<=n; i++) {
    if(_map[_v][i]==1&&!flag[i]) {
      dfs(i);
    }
  }
}

int main() {
  ioboost;

  cin>>n>>m>>v;

  for(int i=0; i<m; i++) {
    int a, b;
    cin>>a>>b;

    _map[a][b]=1;
    _map[b][a]=1;
  }

  reset();
  dfs(v);
  cout<<"\n";
  reset();
  bfs(v);
  
  return 0;
}