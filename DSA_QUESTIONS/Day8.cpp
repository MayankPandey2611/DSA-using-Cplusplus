#include <iostream>
#include <cctype>
#include <climits>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

// QUESTION 25. SORT AN ARRAY USING BUBBLE SORT................

// void bs(vector<int>& arr ,  int n){

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }

// }

// int main(){
//     vector<int>arr{9,8,3,2,1,0,3,1,4,90};
//     int n = arr.size();
//     bs(arr,n);
//     for(auto k:arr){
//         cout<<k<<" ";
//     }
// }

// QUESTION 26. FIND THE GCD OF TWO NUMBERS..............


// int main(){
//     int n1,n2;
//     cin>>n1>>n2;

//     int size;
//     if(n1 > n2){
//         size =n1;
//     }
//     else{
//         size=n2;
//     }
//     int hcf = 1;
//     for(int i=1; i<=size; i++){
//         if(n1 % i == 0 && n2 % i == 0){
//             hcf = i;
//         }
//     }
//     cout<<hcf;
// }


// QUESTION 27. FIND THE FIRST NON REPEATING CHARACTER OF THE STRING....................

int main(){
    string str = "maam listen slient nitin ";
    unordered_map<char , int> freq;

    for(char ch :str){
        freq[ch]++;
    }

    for(char ch : str){
        if(freq[ch] == 1){
            cout<<ch;
            return 0;
        }

    }
    cout<<"not found";
}

