#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
using ll=long long;

int n;
int omap[20][20]={};
int dy[]={ -1, 0, 0, 1 };
int dx[]={ 0, -1, 1, 0 };

struct fish {
  int y, x, dist;
  bool operator<(const fish &b) const {
    if(dist==b.dist) {
      if(y==b.y) {
        return x>b.x;
      }
      return y>b.y;
    }
    return dist>b.dist;
  }
};

queue<fish> shark;

int func() {
  int time=0, eat_fish=0, size=2;

  while(1) {
    priority_queue<fish> pf;
    vector<vector<bool>> flag(n, vector<bool>(n));

    while(!shark.empty()) {
      fish cur=shark.front();
      shark.pop();

      for(int i=0; i<4; i++) {
        int yy=cur.y+dy[i], xx=cur.x+dx[i];

        if(yy<0||yy>=n||xx<0||xx>=n) {
          continue;
        }

        if(flag[yy][xx]||omap[yy][xx]>size) {
          continue;
        }

        flag[yy][xx]=1;
        shark.push({ yy, xx, cur.dist+1 });

        if(omap[yy][xx]<size&&omap[yy][xx]!=0) {
          pf.push({ yy, xx, cur.dist+1 });
        }
      }
    }

    if(pf.empty()) {
      break;
    }

    fish f=pf.top();
    int pfy=f.y, pfx=f.x;
    int pfsz=omap[pfy][pfx];

    if(++eat_fish==size) {
      eat_fish=0;
      size++;
    }

    omap[pfy][pfx]=0;
    shark.push({ pfy, pfx, 0 });
    time+=f.dist;
  }
  return time;
}

int main() {
  ioboost;

  cin>>n;

  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      cin>>omap[i][j];

      if(omap[i][j]==9) {
        omap[i][j]=0;
        shark.push({ i, j, 0 });
      }
    }
  }
  cout<<func()<<"\n";
  
  return 0;
}