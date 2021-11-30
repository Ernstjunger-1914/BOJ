#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, asc[1000000];
  cin>>n;

  for(int i=0; i<n; i++) {
    cin>>asc[i];
  }

  sort(asc, asc+n);

  for(int i=0; i<n; i++) {
    cout<<asc[i]<<"\n";
  }
  return 0;
}