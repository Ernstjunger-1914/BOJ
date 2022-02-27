#include <bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
using ll=long long;

vector<vector<char>> star;

void func(int n, int y, int x) {
  if(n==3) {
    star[y][x]='*';
    star[y+1][x-1]=star[y+1][x+1]='*';

    for(int i=0; i<5; i++) {
      star[y+2][x-2+i]='*';
    }
  } else {
    func(n/2, y, x);
    func(n/2, y+n/2, x-n/2);
    func(n/2, y+n/2, x+n/2);
  }
}

int main() {
  ioboost;

  int n;
  cin>>n;

  star=vector<vector<char>>(n, vector<char>(n*2-1, ' '));
  func(n, 0, n-1);

  for(int i=0; i<n; i++) {
    for(int j=0; j<n*2-1; j++) {
      cout<<star[i][j];
    }
    cout<<"\n";
  }
  return 0;
}