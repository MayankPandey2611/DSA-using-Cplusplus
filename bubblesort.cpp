#include<iostream>
using namespace std;


// RULES 
// 1.IF SIZE IS LESS THAN OR EQUAL TO ZERO SHOW INVALLID.
// 2. MINIMUM SIZE WILL BE MORE THAN 2.
// 3. IF SIZE OF ARRAY IS GREATER THAN 10 SHOW ERROR.


void bubblesort (int arr[],int n){

    int count=0;

    bool check;

    for(int i=0; i<n; i++){
        check = false;
        for(int j=0; j<n-i-1; j++){
            count++;
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                check = true;
            }
        }
        if(check == false){
            break;
        }
    }
    cout<<"Total Count"<<count<<endl;
}


int main() // DRIVER CODE
{
    int size ;
    cin>>size;
if(size<=0 ){
    cout<< "Please enter size of array more than 0 "<<endl;
    return 0;
}
else if(size>10){
    cout<<"please enter size of array less than 10."<<endl;
      return 0;
}
else if(size<=2){
    cout<<"Size of array should be more than 2."<<endl;
      return 0;
}
    int arr[size];
    
    for (int i =0 ;  i<size; i++){
        cin>>arr[i];
        }

    bubblesort(arr,size);
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}

