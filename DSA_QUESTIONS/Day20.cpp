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

// vector<int>plusone(vector<int>& arr){
//     int n = arr.size();

//     for(int i = n-1; i>=0; i--){
//         if(arr[i] < 9){
//             arr[i]++;
//             return arr;
//         }
//         arr[i] = 0;
//     }
//     arr.insert(arr.begin(),1);
//     return arr;
// }

// int main(){
//     vector<int>arr{1,2,3,9};

//     vector<int>ans = plusone(arr);

//     for(auto i : ans){
//         cout<<i<<" ";
//     }
// }



// QUESTION 77. DIAGONAL TRAVERSE.........

//     vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
//         if(mat.empty()) return {};
//         int m = mat.size(), n = mat[0].size();
//         vector<int> result;
        
//         for(int d = 0; d < m + n - 1; d++) {
//             vector<int> intermediate;
            
//             int r = (d < n) ? 0 : d - n + 1; 
//             int c = (d < n) ? d : n - 1;    
            
//             while(r < m && c >= 0) {
//                 intermediate.push_back(mat[r][c]);
//                 r++;
//                 c--;
//             }
            
//             if(d % 2 == 0) {
//                 reverse(intermediate.begin(), intermediate.end());
//             }
            
//             result.insert(result.end(), intermediate.begin(), intermediate.end());
//         }
//         return result;
//     }
    
// int main(){
//     vector<vector<int>>nums{{1,2,3},{4,5,6},{7,8,9}};
//     vector<int>ans = findDiagonalOrder(nums);

//     for(auto i :ans){
//         cout<<i<<" ";
//     }
// }



// QUESTION 78. ADD BINARY ....

// string binaryadd(string s1 , string s2){
//     string result = "";
//     int n = s1.size()-1;
//     int m = s2.size()-1;

//     int carry = 0;

//     while(n >=0 || m>=0 || carry){
//         int sum = carry;

//         if(n >= 0){
//             sum += s1[n--] - '0';
//         }
//         if( m >= 0){
//             sum += s2[m--] - '0';
//         }

//         result.push_back((sum % 2) + '0');
//         carry = sum / 2;
//     }
//     reverse(result.begin() , result.end());
//     return result;
// }


// int main(){
//     string s1,s2;
//     getline(cin,s1);
//     getline(cin,s2);

//     string result = binaryadd(s1,s2);
//     cout<<result;
    
// }


// QUESTION 79. CLIMBING STARIS ..................


int countsteps(int n){
    if (n <= 2){
        return n;
    }

    int a = 1, b = 2 , c;
    for(int i=3; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
    }
    return b;
}


int main(){
    int n;
    cin>>n;
    int steps = countsteps(n);
    cout<<steps;
}