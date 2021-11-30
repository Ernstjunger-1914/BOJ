#include <iostream>

using namespace std;

int n, steal;
int m[1000];

int main() {
  cin>>n;
  cin>>steal;

  for(int i=0; i<n-1; i++) {
    cin>>m[i];
  }

  int leng=n-1;
  int cnt=0;

  while(1) {
    int max=0;
    int win=0;

    for(int j=0; j<leng; j++) {
      if(max<m[j]) {
        max=m[j];
        win=j;
      }
    }

    if(steal>max) {
      cout<<cnt<<"\n";

      break;
    }

    steal++;
    cnt++;
    m[win]--;
  }
  return 0;
} 
