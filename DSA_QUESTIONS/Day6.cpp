#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// QUESTION 16. ROTATE AN ARRAY TO THE LEFT BY K STEPS...........

void reverse(int n, vector<int>&arr,int st , int e){

    while(st<e){
        swap(arr[st],arr[e]);
        st++;
        e--;
    }
    
}

int main(){
    vector<int>arr{1,2,3,4,5};
    int n= arr.size();

    int k;
    cin>>k;
    
    k=k%n;
    
    reverse(5,arr,0,n-1);
    reverse(5,arr,0,n-k-1);
    reverse(5,arr,n-k,n-1);

    for(auto i:arr){
        cout<<i<<" ";
    }

}