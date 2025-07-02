#include<iostream>
#include<vector>
using namespace std;

int main(){
    // PAIR INTRODUCTION...........

    // pair<int,string>p;
    // p.first = 22;
    // p.second = "mayank";

    // cout<<p.first<<":"<<p.second;


    // INSERTING AND DISPLAYING PAIR IN VECTOR........

    vector< pair<string,int> >v;
int size;
cin>>size;
    int age;
    string name;

    for(int i=0; i<size; i++){
        cin>>name;
        cin>>age;
        // METHOD 1.
        v.push_back(make_pair(name,age));

        // METHOD 2.
        // v.push_back({name,age});
    }

    for(int i=0; i<size; i++){
        cout<<v[i].first<<":"<<v[i].second<<" ";
    }

}