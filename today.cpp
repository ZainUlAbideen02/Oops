#include <iostream>
#include <vector>
#include <stack>
using namespace std;
//Valid pranthesis
int main() {
  vector<string>vec;
  vec.push_back("(");
  vec.push_back("(");//r
  vec.push_back("(");//r
  vec.push_back(")");//r
  vec.push_back(")");//r
  vec.push_back("(");//a
  vec.push_back(")");//r
  vec.push_back("(");

  stack<string>st;
  int i = 0;
  for( i ; i<vec.size();i++){
    if(vec[i]=="(" ){
        st.push(vec[i]);
    }
    else{
        if(st.empty()){
        cout<<"Its not a valid pranthesis 1"<<endl;
        return 1;
        }
        st.pop();
    }
    
  }

    if(st.empty()){
        cout<<"Its a Valid Pranthesis"<<endl;
    }
    else{
        cout<<"Its not a valid pranthesis 2"<<endl;
    }

    return 0;

}