#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int n, m;
int sequence[9]={ 0 };
bool b[9]={ 0 };

void func(int cnt) {
  if(cnt==m) {
    for(int i=0; i<m; i++) {
      cout<<sequence[i]<<" ";
    }
    cout<<"\n";
  }

  for(int i=1; i<=n; i++) {
    if(!b[i]) {
      b[i]=true;
      sequence[cnt]=i;
      func(cnt+1);
      b[i]=false;
    }
  }
}

int main() {
  fastio;

  cin>>n>>m;
  func(0);
  
  return 0;
}