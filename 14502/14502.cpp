#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
using ll=long long;

int n, m, result=0;
int orimap[8][8];
int _map[8][8];
int dx[]={ 0, 0, -1, 1 };
int dy[]={ -1, 1, 0, 0 };

void Map(int (*a)[8], int (*b)[8]) {
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      a[i][j]=b[i][j];
    }
  }
}

void ifection() {
  int check=0;
  int sprlab[8][8];
  queue<pair<int, int>> qp;
  Map(sprlab, _map);

  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      if(sprlab[i][j]==2) {
        qp.push(make_pair(i, j));
      }
    }
  }

  while(!qp.empty()) {
    int x=qp.front().first, y=qp.front().second;
    qp.pop();

    for(int i=0; i<4; i++) {
      int xx=x+dx[i], yy=y+dy[i];

      if(0<=xx&&xx<n&&0<=yy&&yy<m) {
        if(sprlab[xx][yy]==0) {
          sprlab[xx][yy]=2;
          qp.push(make_pair(xx, yy));
        }
      }
    }
  }

  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      if(!sprlab[i][j]) {
        check++;
      }
    }
  }
  result=max(result, check);
}

void wall(int _n) {
  if(_n==3) {
    ifection();

    return;
  }

  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      if(!_map[i][j]) {
        _map[i][j]=1;
        wall(_n+1);
        _map[i][j]=0;
      } 
    }
  }
}

int main() {
  ioboost;

  cin>>n>>m;

  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      cin>>orimap[i][j];
    }
  }

  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      if(!orimap[i][j]) {
        Map(_map, orimap);
        _map[i][j]=1;
        wall(1);
        _map[i][j]=0; 
      }
    }
  }
  cout<<result<<"\n";
  
  return 0;
}