#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;

    cin >> n;

    int f=0, s=1, result=1;

    for(int i=1; i<abs(n); i++) {
        result=(f+s)%1000000007;
        f=s;
        s=result;
    }

    if(n==0) {
      cout<<"0\n";
    } else {
      cout<<result<<"\n";
    }

    return 0;
}