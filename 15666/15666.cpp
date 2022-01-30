#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
using ll=long long;

int n, m;
int arr[9];
int num[9];

void func(int x, int l) {
  if(l==m) {
    for(int i=0; i<m; i++) {
      cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return;
  }

  int last=0;

  for(int i=x; i<n; i++) {
    if(num[i]!=last) {
      arr[l]=num[i];
      last=arr[l];
      func(i, l+1);
    }
  }
  return;
}

int main() {
  ioboost;

  cin>>n>>m;

  for(int i=0; i<n; i++) {
    cin>>num[i];
  }

  sort(num, num+n);
  func(0, 0);

  return 0;
}