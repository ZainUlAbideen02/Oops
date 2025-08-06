#include <iostream>
#include <vector>
#include <stack>
using namespace std;

//Minimum add to make the pranthesis valid

int main() {
  vector<string>vec1 = {"a","b","#","c"};
  vector<string>vec2 = {"a","d","y","c"};

    stack<string>s1;
    stack<string>s2;

for(int i = 0 ;i<vec1.size();i++){
    if(vec1[i]=="#"){
        if(s1.empty()){
            cout<<"# can't be the First character of your string.";
            return 1;
        }
        s1.pop();
    }
    else{
        s1.push(vec1[i]);
    }
}

for(int i = 0 ;i<vec2.size();i++){
    if(vec2[i]=="#"){
        if(s2.empty()){
            cout<<"# can't be the First character of your string.";
            return 1;
        }
        s2.pop();
    }
    else{
        s2.push(vec2[i]);
    }
}
  int count = 0;
 if(s1.size()==s2.size()){
      int size = s1.size();
    for(int i =0; i<size;i++){
       if(s1.top()==s2.top()){
        count++;
        s1.pop();
        s2.pop();
       }
       else{
        cout<<"Both strings are not equal."<<endl;
        return 1;
       }
    }
    if(count==size){
        cout<<"Both strings are equal."<<endl;
    }
 }
 else{
    cout<<"The string are not equal to each others."<<endl;
    return 1;
 }
    return 0;  
}