#include<iostream>
using namespace std;


// QUES 1.

// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     int ans= n*fact(n-1);
//     return ans;
// }


// int main() // DRIVER CODE
// {
//     int n;
//     cin>>n;
//     cout<<fact(n);
    
// }


// QUES 2.

// void sorted(int arr[],int n){


//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[j]<arr[i]){
//                 int temp= arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[]={3,5,2,49,38,8};

//     sorted(arr,6);
//     for(int i=0; i<6; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// QUES 3. 

void findyear(int year){

    if(year%4==0 && year%100!=0 || year%400==0){
        cout<<"Leap year.";
    }
    else{
        cout<<"Not a leap year.";
    }
    
}

int main(){

    int year;
    cin>>year;
    findyear(year);
}