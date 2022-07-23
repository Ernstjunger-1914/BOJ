#include <bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)

using namespace std;
using ll=long long;

int n, k;
int arr[3]={ 1, 2, 3 };
map<string, int> sort_map;

void func(string str, int sum) {
  for(int i=0; i<3; i++) {
    sum+=arr[i];

    if(sum>n) {
      continue;
    } else if(sum==n) {
      sort_map[str+to_string(arr[i])]++;
    } else {
      func(str+to_string(arr[i])+"+", sum);
    }
    sum-=arr[i];
  }
}

int main() {
  ioboost;

  cin>>n>>k;
  func("", 0);

  if(k>sort_map.size()) {
    cout<<-1<<"\n";
    return 0;
  }

  int i;
  for(auto a: sort_map) {
    i++;
    if(i==k) cout<<a.first<<"\n";
  }
  return 0;
}