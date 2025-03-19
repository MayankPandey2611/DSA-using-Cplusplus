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

  // 11. FINDING HOW MANY TIMES THE TARGET PRESENT IN AN ARRAY.

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

  // int arr[] = {10, 32, 11, 10, 1};
  // int max = arr[0];

  // for (int i = 1; i < 5; i++)
  // {
  //   if (arr[i] > max)
  //   {
  //     max = arr[i];
  //   }
  // }
  // cout << max;

  // 13. SMALLEST ELEMENT IN ARRAY.

  // int arr[]={10,23,2,1,9};
  // int max=arr[0];

  // for(int i=1; i<5; i++){
  //  if(arr[i]<max){
  //   max=arr[i];
  // }
  // }
  // cout<<max;



  //14. REVERSE AN ARRAY.

//   int arr[]={1,2,3,4,5,6};
//   int i=0;
//   int j=5;

//   while(i<j){
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//     i++;
//     j--;
//   }
// for(int i=0; i<6; i++){
//   cout<<arr[i]<<" ";
// }


// 15.CHECK PALINDROME (METHOD 1.(!=)).

// int arr[]={1,1,2,1,1};
// int i=0;
// int j=4;

// while(i!=j){
//   if(arr[i]!=arr[j]){
//     cout<<"Not palindrome.";
//     return 0;
//   }
//   i++;
//   j--;
// }
// cout<<"Palindrome";



// METHOD 2. (<).

// int arr[]={1,1,2,1,1};
// int i=0;
// int j=4;

// while(i<j){
//   if(arr[i]!=arr[j]){
//     cout<<"Not palindrome.";
//     return 0;
//   }
//   i++;
//   j--;
// }
// cout<<"Palindrome";


// 16. ASCENTING ORDER IN AN ARRAY.

// int arr[]={2,3,2,1,3,2,2};

// for(int i=0; i<7; i++){
//   for(int j=i+1; j<7; j++){
//     if(arr[j] < arr[i]){
//       int temp = arr[i];
//       arr[i] = arr[j];
//       arr[j] = temp;
//     }
//   }
// }

// for(int i=0; i<7; i++){
//   cout<<arr[i]<<" ";
// }


// 17. DESCENTING ORDER IN AN ARRAY.

// int arr[]={1,0,1,2,3,4};

// for(int i=0; i<6; i++){
//   for(int j=i+1; j<6; j++){
//     if(arr[j] > arr[i]){
//       int temp = arr[i];
//       arr[i] = arr[j];
//       arr[j] = temp;
//     }
//   }
// }

// for(int i=0; i<6; i++){
//   cout<<arr[i]<<" ";
// }


// 18. REMOVE THE DUPLICATE FROM AN ARRAY.

// int arr[]={2,3,3,1,6,1};

// for(int i=0; i<6; i++){
//   for(int j=i+1; j<6; j++){
//     if(arr[j]==arr[i]){
//       arr[j]=-1;
//     }
//   }
// }

// for(int i=0 ;i<6; i++ ){
//   if(arr[i]!=-1){
//     cout<<arr[i]<<" ";
//   }
// }


// 19. COUNT THE FREQUENCY OF ELEMENTS PRESENT IN ARRAY.

// int arr[]={1,2,1,2,1,3,4,1};

// for(int i=0; i<8; i++){
//   if(arr[i]!=-1){
//     int count=1;
//   for(int j=i+1; j<8; j++){
//       if(arr[j]==arr[i]){
//         arr[j]=-1;
//         count++;
//       }
//   }
//   cout<<arr[i]<<" = "<<count<<endl;
//   }
// }



// 20.  SECOND LARGEST ELEMENT IN AN ARRAY.

// int arr[]={2,3,4,5,1,7};

// for(int i=0; i<2; i++){
//   for(int j=i+1; j<6; j++){
//     if(arr[j]>arr[i]){
//       int temp = arr[i];
//       arr[i] = arr[j];
//       arr[j]=temp;
//     }
//   }
// }
// cout<<arr[1];


// 21. FIND KTH LARGEST ELEMENT IN AN ARRAY.

// int arr[]={2,3,4,5,6,7};
// int k;
// cin>>k;

// for(int i=0; i<k; i++){
//   for(int j=i+1; j<6; j++){
//     if(arr[j]>arr[i]){
//       int temp= arr[i];
//       arr[i]= arr[j];
//       arr[j]= temp;
//     }
//   }
// }
// cout<<arr[k-1];


// 22. MOVE ZEROES IN THE END OF AN ARRAY.

// int  arr[]={1,2,0,3,0,2,9,0,6};
// int j=0; 
// for(int i=0; i<9; i++){
//   if(arr[i]!=0){
//     int temp = arr[i];
//     arr[i]= arr[j];
//     arr[j] = temp;
//     j++;
//   }
// }

// for(int i=0; i<9; i++){
//   cout<<arr[i]<<" ";
// }

// PRACTICE QUESTION 1. FIND THE TARGET ELEMENT IN AN ARRAY.

// int arr[]={1,2,3,4,5};
// int target;
// cin>>target;
// for(int i=0;i<4; i++){
//   if(arr[i]==target){
//     cout<<"Yes";
//     return 0;
//   }
// }
// cout<<"No";


// PRACTICE QUESTION 2. COUNT NUMBER OF ZEROS IN AN ARRAY.

// int arr[]={1,2,3,0,0};
// int count=0;

// for(int i=0; i<5; i++){
//   if(arr[i]==0){
//     count++;
//   }
// }

// cout<<count;


//23. FIND THE MISSING VALUE FROM AN ARRAY.(SINGLE OR MULTIPLY BOTH)

// int arr[]={1,5,17,19,23};

// for(int i=0; i<4; i++){
//   if(arr[i+1] - arr[i] > 1){
//     for(int j=arr[i]+1; j<arr[i+1]; j++){
//       cout<<j<<" ";
//     }
//    cout<<endl;
//   }



// 24. CHECK THE ARRAY IS IN ASCENTING ORDER OR NOT. 

// int arr[]={1,2,3,4,5};
// for(int i=0; i<5; i++){

//   if(arr[i]<arr[i+1]){
//     cout<<"ascenting";
//     return 0;
//   }
// }
// cout<<"no";


// 25. CHECK THE ARRAY IS IN DECENTING ORDER OR NOT.

// int arr[]={5,4,3,2,1};
// for(int i=0; i<5; i++){
//   if(arr[i]>arr[i+1]){
//     cout<<"decenting";
//     return 0;
//   }
// }
// cout<<"no";


// 26. REVERSE AN ARRAY USING FOR LOOP.

// int arr[]={1,2,3,4,5};
// int j=4;
// for(int i=0; i<j; i++){
//    int temp=arr[i];
//    arr[i]=arr[j];
//    arr[j]=temp;
//    j--;
   
// }

// for(int i=0; i<5; i++){
//   cout<<arr[i]<<" ";
// }

// 27. FIND MAXIMUM PRODUCT OF TWO ELEMENTS.

// int arr[]={6,3,9,5,10};

// int max= arr[0]*arr[1];

// for(int i=0; i<5; i++){
//   for(int j=i+1; j<5; j++){
//     int a=arr[j]*arr[i];
//     if(a>max){
//       max=a;
//     }
//   }
// }
// cout<<max;


// 28. CHECK THAT THE ARRAYS ARE EQUAL OR NOT.

// int arr1[]={1,2,3,4,5};
// int arr2[]={1,2,3,4,5};

// for(int i=0; i<5; i++){
//   if(arr1[i]!=arr2[i]){
//     cout<<"No Both Arrays Are Different.";
//     return 0;
//   }
// }
// cout<<"Yes Both Arrays Are Same.";


// 29.FIND COUNT OF POSITIVE AND NEGATIVE NUMBERS IN AN ARRAY.

// int arr[]={0,-10,1,-1,-3};

// int positive=0;
// int negative =0;
// for(int i=0; i<5; i++){
//   if(arr[i]< 0){
//     negative++;
//   }
//   else if(arr[i]>0){
//     positive++;
//   }
// }

// cout<<"There are "<<positive<<"  Positive"<<" ";
// cout<<" And "<<negative<<" Negative Numbers are in array."<<endl;



// 30.

// #include <iostream>
// #include <vector>

// int main() {
//     // Initialize the array
//     std::vector<int> arr = {1, 2, 3, 4, 5};
//     int n = arr.size();
    
//     // User input for direction and positions
//     std::string direction;
//     int positions;

//     std::cout << "Enter direction to shift (left/right): ";
//     std::cin >> direction;
//     std::cout << "Enter number of positions to shift: ";
//     std::cin >> positions;

//     // Normalize positions
//     positions = positions % n;

//     // Display original array
//     std::cout << "Original array: ";
//     for (int i = 0; i < n; i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     // Shift the array based on the direction
//     if (direction == "left") {
//         // Shift left
//         for (int i = 0; i < n; i++) {
//             std::cout << arr[(i + positions) % n] << " ";
//         }
//     } else if (direction == "right") {
//         // Shift right
//         for (int i = 0; i < n; i++) {
//             std::cout << arr[(i - positions + n) % n] << " ";
//         }
//     } else {
//         std::cout << "Invalid direction! Please use 'left' or 'right'." << std::endl;
//     }

//     std::cout << std::endl;

//     return 0;
// }


   //31. MOVE ZEROS IN THE START OF THE ARRAY.. (ARRAY OF 0'S AND 1'S ONLY)
  //  ASKED IN TCS..
   
  
int arr[]={1,0,1,0,1,1,0,1,0,1,0,0,1,1,1,0};
int size=sizeof(arr)/sizeof(arr[0]);
int j=0;
for(int i=0; i<size; i++){
    
    if(arr[i]==0){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
    }
}

for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}

}