#include<iostream>
using namespace std;

int main(){

  // 1.
//    int arr[5];
// //    ITS PRINTS ADDRESS OF ARRAY.
//    cout<<arr;

// 2.
    // int arr[]={1,2,3,4};
    // cout<<arr[0];
    // cout<<arr[1];
    // cout<<arr[2];
    // cout<<arr[3];

// 3.
  //   int arr[4]={1,2,3,4};
  //   for(int i=0; i<4; i++){
  //   cout<<arr[i]<<" ";
  // }


// 4.
  int arr[]={1,2,3,4,5};
  
  int a= arr[0]+arr[1];
  arr[4]=a-arr[4];

  for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
  }

}