#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
  vector<string>vec;
  vec.push_back("ab");
  vec.push_back("ac");
  vec.push_back("da");
  vec.push_back("da");
  vec.push_back("ac");
  vec.push_back("db");
  vec.push_back("ea");


    vec.push_back("ea");

  stack<string>st;
  st.push(vec[0]);
  for(int i = 1 ; i<vec.size();i++){
    if(vec[i]!=st.top()){
        st.push(vec[i]);
    }
    else{
        st.pop();
    }
  }

  vector<string> nw;
   while(!st.empty()){
    nw.push_back(st.top());
    st.pop();
   }

   for(int i = 0 ; i< nw.size();i++){
    cout<<nw[i]<<" ";
   }
}