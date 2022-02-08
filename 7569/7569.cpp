#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)

using namespace std;
using ll=long long;

int n, m, h, day=0;
int tomato[101][101][101];
int dist[101][101][101];
int moveX[]={ 0, 0, 1, -1, 0, 0 };
int moveY[]={ -1, 1, 0, 0, 0, 0 };
int moveZ[]={ 0, 0, 0, 0, -1, 1 };

int main() {
  ioboost;

  queue<pair<pair<int, int>, int>> qpp;
  cin>>m>>n>>h;

  for(int i=0; i<h; i++) {
    for(int j=0; j<n; j++) {
      for(int k=0; k<m; k++) {
        cin>>tomato[i][j][k];

        if(tomato[i][j][k]==1) {
          qpp.push({ {i, j}, k });
        }

        if(tomato[i][j][k]==0) {
          dist[i][j][k]=-1;
        }
      }
    }
  }  

  while(!qpp.empty()) {
    pair<pair<int, int>, int> pp=qpp.front();
    qpp.pop();

    for(int i=0; i<6; i++) {
      int x=pp.first.second+moveX[i], y=pp.second+moveY[i], z=pp.first.first+moveZ[i];

      if(x<0||x>=n||y<0||y>=m||z<0||z>=h) {
        continue;
      }

      if(dist[z][x][y]>=0) {
        continue;
      }

      dist[z][x][y]=dist[pp.first.first][pp.first.second][pp.second]+1;
      qpp.push({ {z, x}, y });
    }
  }

  for(int i=0; i<h; i++) {
    for(int j=0; j<n; j++) {
      for(int k=0; k<m; k++) {
        if(dist[i][j][k]==-1) {
          cout<<-1<<"\n";

          return 0;
        }
        day=max(day, dist[i][j][k]);
      }
    }
  }
  cout<<day<<"\n";

  return 0;
}