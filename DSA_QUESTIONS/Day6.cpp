#include <iostream>
#include <vector>
#include <algorithm>
#include<unordered_set>
using namespace std;

// QUESTION 16. ROTATE AN ARRAY TO THE LEFT BY K STEPS...........

// void reverse(int n, vector<int>&arr,int st , int e){

//     while(st<e){
//         swap(arr[st],arr[e]);
//         st++;
//         e--;
//     }

// }

// int main(){
//     vector<int>arr{1,2,3,4,5};
//     int n= arr.size();

//     int k;
//     cin>>k;

//     k=k%n;

//     reverse(5,arr,0,n-1);
//     reverse(5,arr,0,n-k-1);
//     reverse(5,arr,n-k,n-1);

//     for(auto i:arr){
//         cout<<i<<" ";
//     }

// }

// QUESTION 17. MOVE ZEROES IN THE END OF THE ARRAY..............

// int main(){
//     vector<int>arr{1,0,9,0,8,0,7,0,0,6,5,3,-1,2};
//     int j=0;
//     for(int i=0; i<arr.size(); i++){
//         if(arr[i] != 0){
//             swap(arr[i],arr[j]);
//             j++;
//         }
//     }

//     for(auto k:arr){
//         cout<<k<<" ";
//     }
// }

// QUESTION 18. MOVE ZEROES IN THE START OF THE ARRAY WHERE ARRAY CONTAINS ONLY 0'S AND 1'S..............

// int main(){
//     vector<int>arr{1,0,1,0,1,0,1,1,1,0};

//     int j=0;

//     for(int i=0; i<arr.size(); i++){
//         if(arr[i] == 0){
//             swap(arr[i],arr[j]);
//             j++;
//         }
//   }

//   for(auto k:arr){
//     cout<<k<<" ";
//   }

// }

// QUESTION 19.  COUNT VOWELS AND CONSTANTS FROM THE STRING .....................

// int main()
// {
//     string str;
//     getline(cin, str);

//     int vc = 0;
//     int cc = 0;

//     string s1;
//     for (char ch : str)
//     {
//         if (isalpha(ch))
//         {
//             s1 += tolower(ch);
//         }
//     }


//     if (s1.size() <= 0)
//     {
//         cout << "Enter valid string";
//         return 0;
//     }

//     for (int i = 0; i < s1.size(); i++)
//     {
//         if (s1[i] == 'a' || s1[i] == 'i' || s1[i] == 'e' || s1[i] == 'o' || s1[i] == 'u')
//         {
//             vc++;
//         }
//         else
//         {
//             cc++;
//         }
//     }

//     cout<<"VOWELS " << vc << " CONSTANTS " << cc;
// }


// QUESTION 20. FIND INTERSECTION BETWEEN TWO ARRAYS..................
// METHOD 1. TWO POINTERS... TC => O(nlogn mlogm)

// int main(){


//     vector<int>arr{3,2,1,4,3,5,9,4,5,6};
//     vector<int>arr1{3,4,5,6,7};

//     vector<int>arr2{};
    

//     sort(arr.begin(),arr.end());
//     sort(arr1.begin(),arr1.end());
//     int i=0;
//     int j=0;
//     while(i < arr.size() && j<arr1.size()){
//         if(arr[i] == arr1[j]){
//             arr2.push_back(arr[i]);
//             i++;
//             j++;
//         }

//         else if(arr[i] < arr1[j]){
//             i++;
//         }

//         else{
//             j++;
//         }
//     }


//     for(auto k:arr2){
//         cout<<k<<" ";
//     }
// }



// METHOD 2. UNORDERED SET......... TC => O(n+m);


// int main(){
//     vector<int>a1{2,1,3,4,2,5,8};
//     vector<int>a2{8,5,6,4,3,12,3,4,5,2,1};

//     vector<int>a3{};

//     unordered_set<int>s(a1.begin(),a1.end());


//     for(int i:a2){
//         if(s.count(i)){
//             a3.push_back(i);
//             s.erase(i);
//         }
//     }

//         for(auto k:a3){
//         cout<<k<<" ";
//     }
// }
