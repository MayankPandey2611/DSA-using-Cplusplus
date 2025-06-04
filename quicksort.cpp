#include<iostream>
using namespace std;

int parition(int arr[] , int s , int e){

    int pvt = arr[s];
    int i = s+1;
    int j = e;

    do{
        while (arr[i] < pvt){
            i++;
        }
        while( arr[j] > pvt ){
            j--;
        }
        if(i<j){
            int temp = arr [i];
            arr [i] = arr[j];
            arr[j] = temp ;
        }

    }while(i<j);
    int tem = arr[s];
    arr[s] = arr[j];
    arr[j] = tem;
    

    return j;

}

void quicksort(int arr[] , int s , int e){

    int pivot;

    if(s<e){
        pivot = parition(arr,s,e);
        quicksort(arr , s , pivot-1);
        quicksort(arr , pivot+1 , e);
    }

}


int main(){

    int arr[]={3,1,4,2,5,10,23,10,21,98,9,9,0};

    int size = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr,0,size-1);

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}