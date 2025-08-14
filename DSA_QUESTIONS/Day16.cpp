#include <iostream>
#include <cctype>
#include <climits>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<math.h>
#include<stack>
#include<bitset>
#include<stack>
using namespace std;

// QUESTION 58. LARGEST 3 DIGIT NUMBER IN A STRING.............


// int main(){
//     string str ;
//     cin>>str;

//     string result = "";

//     for(int i=0; i<str.size(); i++){
//         if(isdigit(str[i]) && str[i] == str[i+1] && str[i] == str[i+2]){
//             string temp = str.substr(i,3);
//             if(temp > result){
//                 result = temp;
//             } 
//         }
//     }
//     cout<<result;

// }


// QUESTION 59. MERGE STRING ALTERNATELY........................

// int main(){
//     string s1,s2;
//     getline(cin,s1);
//     getline(cin,s2);
//     string result = "";

//     for(int i=0; i<s1.size() || i<s2.size(); i++){
//         if(i < s1.size()){
//             result += s1[i];
//         }
//         if(i < s2.size()){
//             result += s2[i];
//         }
//     }
//     cout<<result;

// }


// QUESTION 60. KOKO EATING BANANAS ...................

// int mintime(vector<int>& piles , int h){
//     int low =1;
//     int high =0;
    
//     for(auto pile : piles){
//         high = max(high,pile);
//     }

//     int ans = high;

//     while (low <= high)
//     {
//         int mid = low + (high-low) /2;
//         long long time = 0;
//         for(int pile : piles){
//             time += (long) (pile-1) / mid+1;
//         }

//         if(time <= h){
//             ans = mid;
//             high = mid -1;
//         }
//         else{
//             low = mid +1;
//         }
//     }
//     return ans;
    
// }

// int main(){
//     vector<int>piles{30,11,23,4,20};
//     int hours = 6;

//     cout<<mintime(piles,hours);
// }
