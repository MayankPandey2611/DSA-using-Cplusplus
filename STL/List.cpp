#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // DOUBLY LINKED LIST......

    list<int>l1{21,34,21,56};
    l1.push_front(112);
    l1.push_back(100);

    for(auto k :l1){
        cout<<k<<" ";
    }
cout<<endl;
    l1.pop_back();
    l1.pop_front();

     for(auto k :l1){
        cout<<k<<" ";
    }

cout<<endl;

    // METHOD 1. 
    cout<<[](int a , int b){return a>b;}(5,2);
cout<<endl;

    // METHOD 2. 
    [](int a , int b){return a>b;};
    bool ans = (3,2);
    cout<<ans;
cout<<endl;

    // METHOD 3. (USING POINTER FUNCTION)
    auto p = [](int a,int b){return a>b;};
    cout<<p(4,3);
cout<<endl;

    // LAMBDA FUNCTION IN SORT INBUILT FUNCTION.....
    vector<int>v{21,4,1,3,3};
    sort(v.begin() , v.end(), [] (int a , int b){return a<b;});
    for(auto k:v){
        cout<<k<<" ";
    }
cout<<endl;

    // INBULIT FUNCTIONS IN LIST.........
    // 1. REVERSE()
    l1.reverse();
     for(auto k :l1){
        cout<<k<<" ";
    }
cout<<endl;


// 2.  REMOVE()
l1.remove(21);
for(auto k :l1){
        cout<<k<<" ";
    }
cout<<endl;


}