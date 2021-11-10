#include <iostream>

using namespace std;

long long fibonacci[50]={ 0, 1 };
long long fibon(int N) {
    if(N==0||N==1) {
        return fibonacci[N];
    } else if(fibonacci[N]==0) {
        fibonacci[N]=fibon(N-2)+fibon(N-1);
    }
    return fibonacci[N];
}

int main() {
    int t, t_;
    cin>>t;
    
    for(int i=0; i<t; i++) {
        cin>>t_;
        if(t_==0) {
            cout<<"1 0"<<"\n";
        } else {
            cout<<fibon(t_-1)<<" "<<fibon(t_)<<"\n";
        }
    }
}