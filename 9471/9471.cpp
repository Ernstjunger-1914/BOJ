#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
using ll=long long;

int func(int m) {
  int m1=0, m2=1, cnt=0;

  do {
    int tmp=m1;
    m1=m2;
    m2=(tmp+m1)%m;
    cnt++;
  } while(m1!=0||m2!=1);
  return cnt;
}

int main() {
  ioboost;

  int n, m, p;
  int f[1001];
  cin>>p;

  for(int i=0; i<p; i++) {
    cin>>n>>m;
    cout<<n<<" "<<func(m)<<"\n";
  }
  return 0;
}