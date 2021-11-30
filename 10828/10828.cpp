#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  fastio;

  int n;
  stack<int> st;
  cin>>n;

  while(n--) {
    string str;
    cin>>str;

    if(str=="push") {
      int x;
      cin>>x;
      st.push(x);
    } else if(str=="pop") {
      if(!st.empty()) {
        cout<<st.top()<<"\n";
        st.pop();
      } else {
        cout<<"-1\n";
      }
    } else if(str=="size") {
      cout<<st.size()<<"\n";
    } else if(str=="empty") {
      cout<<st.empty()<<"\n";
    } else if(str=="top") {
      if(!st.empty()) {
        cout<<st.top()<<"\n";
      } else {
        cout<<"-1\n";
      }
    }
  }
  return 0;
}