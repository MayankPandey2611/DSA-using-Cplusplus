#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
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

// vector<int>v(4);
// cout<<v.size()<<endl;
// v.push_back(6);
// cout<<v.capacity();

// ITERATOR IN VECTOR

// vector<int>v{1,2,3,4,5};

//------------INSERT METHOD
// v.insert(v.begin()+2 , 10);
// v.insert(v.end()-2 , 10);
// for(auto i:v){
//     cout<<i<<" ";
// }

//-------------ERASE METHOD

// vector<int>::iterator it=v.end();
// vector<int>::iterator it=v.begin();
// v.erase(it-1);

// for(auto i:v){
//     cout<<i<<" ";
// }





// }

// VECTORS QUESTIONS......
// --------------------------------------------------QUESTION 1. MOVE ZERO IN THE END OF THE VECTOR-----------------------------#
// void movezero(vector<int> nums){
//     int j =0;
//     for(int i=0; i<nums.size(); i++){
//         if(nums[i] != 0){
//             swap(nums[i] , nums[j]);
//             j++;
//         }
//     }

//     for(auto k:nums){
//         cout<<k<<" ";
//     }
// }

// int main(){
//     vector<int>arr{1,0,9,2,0,98,0,8,29};
// movezero(arr);

// }

// void secondlargest(vector<int> num , int n){

//     if( n== 1){
//         cout<<num[0];
//         return;
//     }
    
//     //CAN ALSO USE INT_MIN IN BOTH PLACES FOR BETTERMENT....
//    int large = num[0];
//    int second = num[1];

//    for(int i=0; i<n; i++){
//     if (num[i] > large){
//         second = large;
//         large = num[i];
//     }
//     else if(num[i] > second && num[i] != large){
//         second = num[i];
//     }
//    }

//    cout<<second;

// }


// int main(){
//     vector<int>arr{34,56};
//     int size = arr.size();
//     secondlargest(arr,size);
// }

// int main(){
//     vector<int>v{12,3,42,1};
//     sort(v.begin() , v.end());
    
//  }