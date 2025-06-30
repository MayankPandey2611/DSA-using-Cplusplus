#include<iostream>
#include<vector>

using namespace std;

int main(){
// TYPES => 
// 1. DYNAMIC ARRAY => SIZE DEPENDS UPON USER INPUTS.
    // vector<int> v;
    // cout<<v.size();

// 2. STATIC ARRAY => MEANS SIZE IS DEFIND BY USER AND VALUES WILL BE ZERO FOR ALL INDEX.

// vector<int>v(5);
// cout<<v[1];
// cout<<v.size();

// 3. STATIC ARRAY WITH INDEXING VALUES => IN THIS SIZE AND VALUES WILL BE GIVEN BY USER.

// vector<int>v(5,2);
// cout<<v.size();
// for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";
// }


// 4. STATIC ARRAY WITH FIXED SIZE => MEANS VALUES OF ARRAY WILL BE GIVEN AND NO MORE VALUES WILL BE ADDED BY USER.

// vector<int>v{2,1,3};
// cout<<v.size();

// WE CAN REPLACE THE VALUES BUT CANNOT ADD NEW VALUES.

// v[1]=90;
// v[3]=100;
// for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";
// }

// INBULIT FUNCTIONS OF VECTOR .......
// 1. PUSH_BACK =>

// vector<int>v;
// v.push_back(12);
// v.push_back(10);
// cout<<v.size();
// for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";
// }


// 2. RESIZE =>
// vector<int>v(5);
// cout<<v.size()<<endl;

// v.resize(3);
// cout<<v.size();

// 3. CLEAR =>

// vector<int>v{2,1,3};
// v.clear();

// cout<<v.size();


// 4. POP_BACK =>

// vector<int>v{2,1,3};
// for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;
// v.pop_back();

// for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";
// }


// 5. MAX_SIZE =>

// vector<int>v;
// cout<<v.max_size();


// TAKING INPUT FROM USER AND PRINTING THE VECTOR ARRAY 

// vector<int>v;
// int size , num ;
// cin>>size;

// for(int i=0; i<size; i++){
//     cin>>num;
//     v.push_back(num);
// }

// // PRINTING

// for(auto i:v){
//     cout<<i<<" ";
// }


// DIFFERENCE BETWEEN SIZE AND CAPACITY 

vector<int>v(4);
cout<<v.size()<<endl;
v.push_back(6);
cout<<v.capacity();

}