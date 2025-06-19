
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

// 1. STABLE => NO IT IS NOT STABLE IN GIVEN ARRAYS.
// 2. INPLACE => YES 
// 3. TIME COMPLEXITY =>  O(n^2)
// 4. SPACE COMPLEXITY => O(1)
// 5. OPTIMIZED => CANT BE OTIMIZED.
// 6. APPROACH => SUBTRACT AND CONQUER .