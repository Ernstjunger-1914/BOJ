#include <iostream>

using namespace std;

int factorial(int n) {
  if(n>1) {
    n*=factorial(n-1);

    return n;
  } else {
    return 1;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n_;
  cin>>n_;

  cout<<factorial(n_)<<endl;

  return 0;
}