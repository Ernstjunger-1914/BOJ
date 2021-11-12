#include <iostream>

using namespace std;

int main() {
  int n, b, h, w, p, a, result=0, min=0;
  cin>>n>>b>>h>>w;
  min=b+1;

  for(int i=0; i<h; i++) {
    cin>>p;

    for(int j=0; j<w; j++) {
      cin>>a;

      if(n<=a) {
        result=p*n;
      }
    }
    if(result<min&&result!=0) {
      min=result;
    }
  }

  if(min>b) {
    cout<<"stay home\n";
  } else {
    cout<<min<<"\n";
  }
} 
