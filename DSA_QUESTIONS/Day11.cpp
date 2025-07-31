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

// QUESTION 38. SINGLE NUMBER..........................
// int findsingle(vector<int>& arr){
//     int unique =0;

//     for(int i=0; i<arr.size(); i++){
//         unique = unique ^ arr[i];
//     }
//     return unique;
// }
// int main(){
//     vector<int>arr{};

//     int result = findsingle(arr);

//     cout<<result;
// }


// QUESTION 39. SINGLE NUMBER 2..................

// int findsingle(vector<int>& nums){
//     int ones =0;
//     int twos =0;
//     for(auto n : nums){
//         ones = (ones ^ n) & ~twos;
//         twos = (twos ^ n) & ~ones;
//     }
//     return ones;
// }
// int main(){
//     vector<int> nums{1,2,1,1};
//     int result = findsingle(nums);
//     cout<<result;
// }
