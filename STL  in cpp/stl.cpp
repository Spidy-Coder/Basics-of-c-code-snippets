//four components:-

//algorithms
//containers
//functions
//iterators

//Vectors - part of container class

//syntax:- vector<object_type> v1;

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    for(int i=1;i<=5;i++){
        v.push_back(i);
    }
    cout<<"Output of begin and end:";
    for(auto i = v.begin(); i!= v.end();++i){
        cout<<*i<<" ";
    }
    v.pop_back();
    cout<<"Output after pop:";
    for(auto i = v.begin(); i!= v.end();++i){
        cout<<*i<<" ";
    }
    return 0;
}