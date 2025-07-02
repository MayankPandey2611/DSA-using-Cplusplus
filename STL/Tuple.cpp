#include<iostream>
#include<tuple>
#include<vector>
using namespace std;


int main(){
    tuple<int,string,float>t;
    int age;
    string name;
    float cgpa;
    cin>>get<0>(t);
    cin>>get<1>(t);
    cin>>get<2>(t);

    cout<<get<0>(t);
    cout<<get<1>(t);
    cout<<get<2>(t);
}