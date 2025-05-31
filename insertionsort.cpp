#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4};
int count=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i =1; i<size; i++){

        int j= i;

        while( j>0 && arr[j]<arr[j-1] ){
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1] = arr[j];
            j--;
            count++;
        }
    }
cout<<count<<endl;
// PRINTING ARRAY.
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
// ---------------------------INTERVIEW QUESTIONS 

// 1. STABLE => YES IT IS STABLE.
// 2. INPLACE => YES IT IS INPLACE.
// 3. TIME COMPLEXITY => O(n^2)
// 4. SPACE COMPLEXITY => O(n)
// 5. OPTIMIZED => YES IT IS OPTIMIZED.