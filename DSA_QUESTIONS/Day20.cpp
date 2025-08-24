#include <iostream>
#include <cctype>
#include <climits>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <math.h>
#include <stack>
#include <bitset>
#include <stack>
using namespace std;

// QUESTION 74. Longest Subarray of 1's After Deleting One Element....

// int longestsize(vector<int>& nums){
//     int l =0,a=0,z=0;

//     for(int r=0; r<nums.size(); r++){
//         if(nums[r] == 0){
//             z++;
//         }

//         while(z > 1){
//             if(nums[l] == 0){
//                 z--;
//             }
//             l++;
//         }
//         a = max(a , r-l);
//     }
//     return a;
// }

// int main(){
//     vector<int> nums{1,0,1,1,1,0,1,1,0,1};
//     int ans = longestsize(nums);
//     cout<<ans;
// }



// QUESTION 75. LENGTH OF LAST WORD....................


// int countlength(string str){
//     int i=str.size()-1;
//     int count =0;

//     while(i >= 0 && str[i] == ' '){
//         i--;
//     }

//     while(i>=0 && str[i] != ' '){
//         count++;
//         i--;
//     }
//     return count;
// }

// int main(){
//     string str;
//     getline(cin,str);
//     int ans = countlength(str);
//     cout<<ans;
// }


// QUESTION 76. PLUS ONE................

vector<int>plusone(vector<int>& arr){
    int n = arr.size();

    for(int i = n-1; i>=0; i--){
        if(arr[i] < 9){
            arr[i]++;
            return arr;
        }
        arr[i] = 0;
    }
    arr.insert(arr.begin(),1);
    return arr;
}

int main(){
    vector<int>arr{1,2,3,9};

    vector<int>ans = plusone(arr);

    for(auto i : ans){
        cout<<i<<" ";
    }
}