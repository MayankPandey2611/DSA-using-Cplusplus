
#include<iostream>
using namespace std;


void mergearray(int arr[] , int s , int m , int e){

    int arr2[e+1];
    int i = s;
    int j = m+1;
    int k = s ;

    while (i<=m && j<=e ){

        if(arr[i] < arr[j]){
            arr2[k] = arr[i];
            i++;
        }

        else{
            arr2[k] = arr[j];
            j++;
        }
        k++;
    }


    while(i<=m){
        arr2[k] = arr[i];
        i++;
        k++;
    }

    while(j<=e){
        arr2[k] = arr[j];
        j++;
        k++;
    }


    for(int i =s; i<=e; i++){
        arr[i] = arr2[i];
    }
}

void mergesort(int arr[], int start , int end){

    int mid;
    if (start < end){
        mid = (start + end) / 2 ;
        mergesort(arr , start , mid);
        mergesort(arr , mid +1 , end);
        mergearray( arr , start , mid , end); 
    }
}

int main(){

    int arr[]={2,1,3,2,4,5,3,6,4,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    mergesort(arr , 0 , size-1);

    for (int i=0 ; i<size; i++){
        cout<<arr[i]<<" ";
    }

}



// ---------------------------INTERVIEW QUESTIONS 

// 1. STABLE => NO  IT IS NOT STABLE.
// 2. INPLACE => NO IT IS NOT INPLACE.
// 3. TIME COMPLEXITY => 
// 4. SPACE COMPLEXITY => 
// 5. OPTIMIZED => 