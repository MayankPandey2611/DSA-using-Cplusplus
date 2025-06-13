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

// void findyear(int year){

//     if(year%4==0 && year%100!=0 || year%400==0){
//         cout<<"Leap year.";
//     }
//     else{
//         cout<<"Not a leap year.";
//     }
    
// }

// int main(){

//     int year;
//     cin>>year;
//     findyear(year);
// }


// BUBBLE SORT 


// void bubble(int arr[] , int n){


//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 int tmp = arr[j];
//                 arr[j] =arr[j+1];
//                 arr[j+1]=tmp;
//             }
//         }
//     }
// }

// int main(){

//     int arr[]={3,1,2,4,5,10,1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     bubble(arr , n);

//     for (int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }


// INSERTION SORT 

// int main(){

//     int arr[]={2,1,4,3,6,5};

//     int n = sizeof(arr)/sizeof(arr[0]);

//     for (int i =1; i<n; i++){
//         int j=i;

//         while( j >0 &&  arr[j] < arr[j-1]){
//             swap(arr[j] , arr[j-1]);
//             j--;
//         } 
//     }

// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
// }



// SELECTION SORT 

// int main (){

//     int arr[] = {3,2,1,4,2,5,0,80,57};

//     int s = sizeof(arr) / sizeof(arr[0]);

//     for (int i =0; i<s; i++ ){

//         int min = i;

//         for(int j=i+1; j<s; j++){
//             if (arr[min] > arr[j] ){
//                 min = j;
//             }
//         }

//         if (min != i){
//             swap(arr[i], arr[min]);
//         }
//     }



//     for (int i=0; i< s; i++){
//         cout<<arr[i] <<" ";
//     }
// }


// QUICK SORT 

// int part (int arr[] , int s , int e){

//     int pvt = arr[s];
//     int i = s+1;
//     int j= e;

//     do{
//         while(arr[i] < pvt){
//             i++;
//         }

//         while(arr[j]  > pvt){
//             j--;
//         }

//         if(i<j){
//             swap(arr[i] ,arr[j]);
            
//         }

//     }while(i<j);

//     swap(arr[s], arr[j]);

//     return j;
// } 

// void quick(int arr[] ,int s, int e){

//     if (s<e){
//         int pivot = part (arr ,s, e);
//         quick(arr , s ,pivot-1);
//         quick(arr , pivot+1 , e);
//     }
// }
// int main (){

//     int arr[] = {3,1,4,23,5,12,56,0,1,3,11,0};

//     int n= sizeof(arr) / sizeof(arr[0]);

//     quick(arr , 0 , n-1);

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }


// }



// MERGE SORT 
void mergeboth(int arr[] , int s , int m , int e){

    int arr2[e+1];

    int i=s;
    int j= m+1;
    int k=s;

    while (i<=m && j<=e){

        if(arr[i] < arr[j]){
            arr2[k] = arr [i];
            i++;
         }

         else{
            arr2[k] = arr[j];
            j++;
         }
         k++;
    }

    while(i<=m){
        arr2[k]=arr[i];
        i++;
        k++;
    }

    while(j<=e){
        arr2[k] = arr[j];
        j++;
        k++;
    }

    for (int i=s; i<=e; i++ ){
        arr [i] = arr2[i];
    }

}

void merge(int arr[] , int s ,int e) {
    
    if (s<e){
        int mid = (s+e) / 2;
        merge(arr , s , mid);
        merge (arr , mid+1 , e);

        mergeboth (arr ,s ,mid ,e);
    }
}
int main (){

    int arr []={2,1,5,4,1,6,7,0,9,7,69};

    int s = sizeof(arr) / sizeof(arr[0]);

    merge(arr , 0 , s-1);

    for (int i=0 ; i<s ; i++){
        cout << arr[i] << " ";
    }

}