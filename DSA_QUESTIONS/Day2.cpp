#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void second(int arr[] ,int n){
  int large = arr[0];
   int second = arr[1];

   if(n == 1){
    cout<<arr[0];
    return ;
   }

   for(int i=0; i<=n; i++){
        if( arr[i] > large){
            second = large;
            large = arr[i];
        }
        else if(arr[i] > second && arr[i] != large){
            second = arr[i];
        }

   }

   cout<<second;
}
int main(){




    // QUESTION 4. CHECK NUMBER IS PRIME OR NOT......

//     int num;
//     cin>>num;

//     bool check = false;
//    for(int i= 2; i*i<=num; i++){

//     if(num % i == 0){
//         check=true;
//     }

//    }

//    if(check){
//     cout<<" not prime";
//    }
//    else{
//     cout<<"prime";
//    }
   

   // QUESTION 5. PRINT THE FIBONACCI SERIES UPTO N TERMS.....
   
//    int n;
//    cin>>n;

//   if (n <=0){
//     cout<<"Enter positive numbers"<<endl;
//     return 0;
//   }

//   int s=0;
//   int e=1;

//   if(n==1){
//     cout<<s<<endl;
//   }
//   else{
//     cout<< s <<" "<< e <<" ";
//     for(int i=3; i<=n; i++){
//         int nx = s+e;
//         cout<<nx<<" ";
//         s=e;
//         e=nx;
//     } 
//   }


   // QUESTION 6. FIND THE SECOND LARGEST TERM IN AN ARRAY.....
   
   int arr[] ={12,34,12,23,43,3,70};
   int n = sizeof(arr)/sizeof(arr[0]);

   second(arr,n);

}