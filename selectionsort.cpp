
#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,1,4,9,10,0,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        int min = i;
        for(int j = i+1; j<size; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }

        if(min != i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }


    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


// ---------------------------INTERVIEW QUESTIONS 

// 1. STABLE =>
// 2. INPLACE => 
// 3. TIME COMPLEXITY => 
// 4. SPACE COMPLEXITY => 
// 5. OPTIMIZED => 