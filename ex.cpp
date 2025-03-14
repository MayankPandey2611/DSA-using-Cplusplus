#include <iostream>
using namespace std;
#include <ctime>

int main() {
    // // Get the current time
    // std::time_t now = std::time(0);
    
    // // Convert to string representation
    // char* dt = std::ctime(&now);
    
    // // Print the current date and time
    // std::cout << "Current date and time: " << dt;

    // return 0;


//     int arr[]={1,2,1,2,3,4};

//     for(int i=0; i<6; i++){
//         for(int j=i+1; j<6; j++){
//             if(arr[j]==arr[i]){
//                 arr[j]=-1;
//             }
// }        
//     }

//     for(int i=0; i<6; i++){
//         if(arr[i]!=-1){
//             cout<<arr[i]<<" ";
//         }
//     }



// int arr[] ={1,1,1,2,2,3,4,5};

// for(int i=0; i<8; i++){
//     if(arr[i]!=-1){
//         int count=1;
//         for(int j=i+1; j<8; j++){
//             if(arr[j]==arr[i]){
//                 arr[j]=-1;
//                 count++;
//             }
//         }
//         cout<<arr[i]<<" = "<<count<<endl;
//     }
// }


// int arr[]={1,2,3,4,5};
// int k;
// cin>>k;
    
// for(int i=0; i<k; i++){
//     for(int j=i+1; j<5; j++){
//         if(arr[j]>arr[i]){
//             int temp = arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
// }
// cout<<arr[k-1];



// int arr[]={1,2,2,0,0,1,0,3,4};

// int j=0; 
// for(int i=0; i<9; i++){
//     if(arr[i]!=0){
//         int temp = arr[i];
//         arr[i]= arr[j];
//         arr[j]=temp;
//         j++;
//     }
// }
// for(int i=0; i<9; i++){
//     cout<<arr[i]<<" ";
// }


// int arr[]={1,4,10,12,20};

// for(int i=0; i<5; i++){
//     if(arr[i+1] - arr[i] >1){
//         for(int j=arr[i]+1; j<arr[i+1]; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


// int arr[]={1,2,3,45,4};
// int max= arr[0];

// for(int i=1; i<5; i++){
//     if(arr[i]>max){
//         max= arr[i];
//     }
// }
// cout<<max;

// int arr[]={1,2,3,4};
// int sum=0; 
// for(int i=0; i<4;i++){
//     sum+=arr[i];
// }
// cout<<sum;

// int arr[]={1,2,3,4};
// int k;
// cin>>k;
//  for(int i=0; i<k; i++){
//     for(int j=i+1; j<4; j++){
//         if(arr[j]>arr[i]){
//             int temp= arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//         }
//     }
//  }
//  cout<<arr[k-1];

// int arr[]={1,2,1,3,1,4};

// for(int i=0; i<6; i++){
//     for(int j=i+1; j<6; j++){
//    if(arr[j]==arr[i]){
//     arr[j]=-1;
//    }
//    }
// }

// for(int i=0; i<6; i++){
//     if(arr[i]!=-1){
//         cout<<arr[i]<<" ";
//     }
// }


// int arr[]={1,0,2,3,0,2};
// int j=0;
// for(int i=0; i<6; i++){
//     if(arr[i]!=0){
//         int temp =arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         j++;
//     }
// }
// for(int i=0; i<6; i++){
//     cout<<arr[i]<<" ";
// }


// int arr[]={1,1,2,2,3,4};
// for(int i=0; i<6; i++){
//     if(arr[i]!=-1){
//         int count=1;
//         for(int j=i+1; j<6; j++){
//             if(arr[j]==arr[i]){
//                 arr[j]=-1;
//                 count++;
//             }
//         }
//         cout<<arr[i]<<" = "<<count<<endl;
//     }
// }


string s1="NITIN";
string s2="NITIN";

if(s1.length()!=s2.length()){
    cout<<"Not an Anagram.";
    return 0;
}

for(int i=0; i<s1.length(); i++){
  
    for(int j=0; j<s2.length(); j++){
        if(s2[j]==s1[i]){
            s1[i]=='#';
           break;
        }
    }
   
}

for(int i=0; i<s1.length(); i++){
    if(s1[i]=='#'){
        cout<<"Anagram";
        return 0;
    }
}


// SORTING APPRAOCH.

 // for(int i=0; i<size-1; i++){
    //     for(int j=0; j<size-i-1; j++){
    //         if(arr[j]>arr[j+1]){
    //             int temp= arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //     }
    // }
}