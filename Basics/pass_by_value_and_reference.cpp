#include<iostream>
using namespace std;

// void show(int &a , int &b){
//     a=a+1;
//     b=b+2;
//     cout<<a+b;
// }

// int main()
// {

// int a = 12;
// int b=34;
// show(a,b);
// cout<<endl;
// cout<<a<<endl;
// cout<<b<<endl;

// }


void show(int arr[],int n){

    for(int i=0; i<n; i++){
        arr[i] = arr[i]+2;
    }

}

int main(){
    int arr[]={3,5,2,49,38,8};

    show(arr,6);

    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

}
