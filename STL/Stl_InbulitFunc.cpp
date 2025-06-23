
#include<iostream>
using namespace std;

// FIRST TYPE OF INBULIT METHODS OR FUNCTIONS ARE ARRAY.

#include<array>
int main(){
// CREATING ARRAY
array<int , 5> arr{2,1,4,5,2};
array<int , 5> arr1{};

// PRINTING ARRAY USING (AT) METHOD...

// for(int i=0; i<9;i++){
//     cout<<arr.at(i)<<" ";
// }


// PRINTIG ARRAY USING (SIZE) METHOD....
// for(int i=0; i<arr.size();i++){
//     cout<<arr[i]<<" ";
// }


// GGETTING ARRAYS FIRST AND LAST VALUE USING (FRONT) AND (BACK) METHOD.....
// cout<<arr.front()<<endl;
// cout<<arr.back()<<endl;


// SWAPPING VALUES OF TWO ARRAYS USING (SWAP) METHOD.....

// arr.swap(arr1);
// for(int i=0; i<arr.size();i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// for(int i=0; i<arr1.size();i++){
//     cout<<arr1[i]<<" ";
// }



// FILLING ALL THE VALUES OF ARRAY USING (FILL) METHOD....

// arr1.fill(100);
// for(int i=0; i<arr1.size();i++){
//     cout<<arr1[i]<<" ";
// }


// CHECKING IS OUR ARRAY IS EMPTY OR NOT.....

if(arr1.empty()){
    cout<<"yes";
}
else{
    cout<<"no";
}
}