#include <iostream>
#include <cctype>
#include <climits>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<math.h>
#include<stack>
using namespace std;


// QUESTION 28. CONVERT BINARY NUMBER INTO DECIMAL NUMBER.................................

// int binarytodecimal(string bi){
//     int dec = 0;
//     int len = bi.size();

//     for(int i=0; i<len; i++){
//         if(bi[len - 1 -i] == '1'){
//             dec += pow(2,i);
//         }
//     }
//     return dec;
// }

// int main(){
//     string binary;
//     cin>>binary;
//     cout<<binarytodecimal(binary);
// }



// QUESTION 29. IMPLEMENT BINARY SEARCH ON SORTED ARRAY........................


// int binarysearch(vector<int>& arr , int n , int k){
//     int s = 0;
//     int e = n-1;

//     while(s <= e){
//         int mid = (s+e)/2;

//         if(arr[mid] == k){
//             return mid;
//         }
//         else if(arr[mid] < k){
//             s = mid +1;
//         }
//         else{
//             e = mid -1;
//         }
//     }


//     return -1;
// }


// int main(){
//    vector<int>arr{1,2,3,4,5,6,7};
//    int n = arr.size();
//    int target ;
//    cin>>target;

//    int result = binarysearch(arr,n,target);

//    if (result != -1){
//         cout<<"Element found at index : "<<result;
//    }
//    else{
//     cout<<"not found";
//    }
// }



// QUESTION 30. FIND THE LARGEST SUM OF SUBARRAY (KADENS ALGO)...........................


// int KADENS(vector<int>& arr,int n){
//     int maxsum = arr[0];
//     int countsum = arr[0];

//     for(int i= 1; i<n; i++){
//         countsum = max(arr[i],countsum+arr[i]);
//         maxsum = max(countsum,maxsum);
        
//     }
//     return maxsum;
// }

// int main(){
//     vector<int> arr{-1,2,1,2,3,-4,5,2};
//     int n = arr.size();

//     cout<<KADENS(arr,n);
// }



// QUESTION 31. CHECK IF BRACKETS ARE BALANCED IN AN EXPRESSION......................

// bool checkbrackets(string exp){

//     stack<char> s;

//     for (auto ch : exp){
//         if(ch == '(' || ch == '{' || ch == '['){
//             s.push(ch);
//         }
//         else if(ch == ')' || ch == '}' || ch == ']'){
//             if(s.empty()){
//                 return false;
//             }
//             char top = s.top();
//             if(ch == ')' && top != '(' 
//             || ch == '}' && top != '{'
//             || ch == ']' && top != '['){
//                 return false;
//             }
//             s.pop();
//         }
//     }

//     return s.empty();
// }


// int main(){
//     string exp ;
//     cin>>exp;

//     if(checkbrackets(exp)){
//         cout<<"balanced";
//         return 0;
//     }
//     else{
//         cout<<"not balanced";
//     }
// }




// QUESTION 32. CHECK IF ARRAY CONTAINS DUPLICATE OR NOT..........................

// bool ContainsD(vector<int>& arr){

//     unordered_map<int,int> m;
   
//     for(int n : arr){
//         m[n]++;
//     }

//     for(auto it : m){
//        if( it.second >= 2){
//             return true;
//         }
//     }
//     return false;
// }


// int main(){
//     vector<int>arr{1,990,8};

//     if(ContainsD(arr)){
//         cout<<"true";
//     }
//     else{
//         cout<<"false";
//     }
// }


// QUESTION 33. PRODUCT OF ARRAY EXPECTS SELF.............

vector<int> Product(vector<int>& arr){
    int n  = arr.size();

    vector<int>res(n,1);

    int left = 1;
    for(int i=0; i<n; i++){
        res[i] = left;
        left *= arr[i];
    }

    int right = 1;
    for(int i = n-1; i>=0; i--){
        res[i] *= right;
        right *= arr[i];
    }
    return res;
}

int main(){
    vector<int>arr{1,2,3,4,5};
    vector<int>result=Product(arr);

    for(auto val : result){
        cout<<val<<" ";
    }

}