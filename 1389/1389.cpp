#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  fastio;

  int n, m;
  int people[101][101];
  cin>>n>>m;


  for(int i=0; i<m; i++) {
    int a, b;
    cin>>a>>b;

    people[a][b]=1;
    people[b][a]=1;
  }

  for(int i=1; i<=n; i++) {
    for(int j=1; j<=n; j++) {
      if(i!=j&&people[i][j]!=1) {
        people[i][j]=10000000;
      }
    }
  }

  for(int i=1; i<=n; i++) {
    for(int j=1; j<=n; j++) {
      for(int k=1; k<=n; k++) {
        if(people[i][j]+people[i][k]<people[j][k]) {
          people[j][k]=people[j][i]+people[i][k];
        }
      }
    }
  }

  int value=10000000, result=0;

  for(int i=1; i<=n; i++) {
    int temp=0;

    for(int j=1; j<=n; j++) {
      temp+=people[i][j];
    }

    if(temp<value) {
      value=temp;
      result=i;
    }
  }
  cout<<result<<"\n";

  return 0;
}