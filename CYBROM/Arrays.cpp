#include <iostream>
using namespace std;

int main()
{

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
  // int arr[]={1,2,3,4,5};

  // int a= arr[0]+arr[1];
  // arr[4]=a-arr[4];

  // for(int i=0; i<5; i++){
  //   cout<<arr[i]<<" ";
  // }

  // 5. UPDATE AN ARRAY.

  // int arr[]={1,2,3,4,5};

  // for(int i=0; i<5; i++){
  //   cout<<arr[i]+5<<" ";
  // }

  // 6.DELETION IN ARRAY.

  // METHOD 1.
  // int arr[]={1,2,3,4,5};

  // for(int i=0; i<5; i++){
  //   if(arr[i]!=3){
  //     cout<<arr[i]<<" ";
  //   }
  // }

  // 7. REPLACE AN ELEMENT FROM AN ARRAY.

  // int arr[] = {1, 2, 3, 4, 5};
  // for (int i = 0; i < 5; i++){
  //   if (arr[i] == 3){
  //     arr[i] = -1;
  //   }
  // }
  // for (int i = 0; i < 5; i++){
  //   cout << arr[i] << " ";
  // }

  // 8.SWAPPING.

  // int arr[]={1,2,3,4,5};

  // int temp=arr[0];
  // arr[0]=arr[2];
  // arr[2]=temp;

  // for(int i=0;i<5; i++){
  //   cout<<arr[i]<<" ";
  // }

  // 9.ADDTION OF AN ARRAY.

  // int arr[]={1,2,3,4,5};
  // int sum=0;
  // for(int i=0; i<5; i++){
  //   sum+=arr[i];
  // }
  // cout<<sum;

  // 10. MULTIPLICATION OF AN ARRAY.

  // int arr[]={1,2,3,4,5};
  // int sum=1;
  //   for(int i=0; i<5; i++){
  //     sum*=arr[i];
  //   }
  //   cout<<sum;

  // 11. FINDING THE TARGET FROM THE ARRAY.

  // int arr[]={1,2,1,2,3};
  // int target;
  // cin>>target;
  // int count=0;

  // for(int i=0; i<5; i++){
  //   if(arr[i]==target){
  //     count++;
  //   }
  // }
  // cout<<count;

  // 12.GREATEST ELEMENT IN ARRAY.

  int arr[] = {10, 32, 11, 10, 1};
  int max = arr[0];

  for (int i = 1; i < 5; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  cout << max;

  // 13. SMALLEST ELEMENT IN ARRAY.

  // int arr[]={10,23,2,1,9};
  // int max=arr[0];

  // for(int i=1; i<5; i++){
  //  if(arr[i]<max){
  //   max=arr[i];
  // }
  // }
  // cout<<max;
}