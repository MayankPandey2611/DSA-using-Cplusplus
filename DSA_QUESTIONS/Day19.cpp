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

// QUESTION 69. COUNT SUBMATRICS WITH ALL ONES...........

// int countsubmatrix(vector<vector<int>>& m){
//     int a = m.size() , b = m[0].size();
//     vector<int>h(b,0);
//     int ans =0;

//     for(int i =0; i<a; i++){
//         for(int j =0; j<b; j++){
//             if(m[i][j] == 0){
//                 h[j] =0;
//             }
//             else{
//                 h[j] += 1;
//             }
//         }

//         for(int j=0; j<b; j++){
//             int min_h = h[j];
//             for(int k =j; k>=0 && min_h >0; k--){
//                 min_h = min(min_h , h[k]);
//                 ans += min_h;
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<vector<int>>matrix{{0,1,1,0},{0,1,1,1},{1,1,1,0}};

//     int ans = countsubmatrix(matrix);
//     cout<<ans;
// }


// QUESTION 70. COMBINATIONS SUM 3...........


// void findsum(int n,int k,vector<vector<int>>& ans , vector<int> temp , int i, int sum){
//     if(temp.size() == k){
//         if(sum == n){
//             ans.push_back(temp);
//         }
//         return;
//     }

//     for(int j= i+1; j<10; j++){
//         temp.push_back(j);
//         findsum(n,k,ans,temp,j,sum+j);
//         temp.pop_back();
//     }
// }

// vector<vector<int>> combination(int n , int k){
//     vector<vector<int>> ans;
//     vector<int>temp;
//     findsum(n,k,ans,temp,0,0);
//     return ans;
// }

// int main(){
//     int k;
//     cin>>k;
//     int n;
//     cin>>n;
//     vector<vector<int>> ans = combination(n,k);

//     for (auto &triplet : ans) {
//         for (int num : triplet) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }
// }



// QUESTION 71. Find the Minimum Area to Cover All Ones I.....


// int minarea(vector<vector<int>>& grid){

//     if(grid.empty() || grid[0].empty()){
//         return 0;
//     }

//     int m = grid.size() , n = grid[0].size();

//     int top = INT_MAX , bottom = INT_MIN ;
//     int left = INT_MAX , right = INT_MIN ; 

//     for(int i=0; i<m; i++){
//         for(int j =0; j<n; j++){
//             if(grid[i][j] == 1){

//                 if(i < top){
//                     top = i;
//                 }

//                 if(i > bottom){
//                     bottom = i;
//                 }

//                 if(j < left){
//                     left = j;
//                 }

//                 if(j > right){
//                     right = j;
//                 }
//             }
//         }
//     }

//     if(top == INT_MAX){
//         return 0;
//     }

//     long long h = bottom - top + 1LL;
//     long long w = right - left + 1LL;
//     return (h * w);


// }

// int main(){
//     vector<vector<int>> grid{{1,0},{0,0}};
//     int ans = minarea(grid);
    
//     cout<<ans;
// }


// QUESTION 72. REMOVE ELEMENT ...................


// int removeelement(vector<int>& n , int k){
//     int len =0;

//     for(int i=0; i<n.size(); i++){
//         if(n[i] != k){
//             n[len] = n[i];
//             len++;
//         }
//     }

//     return len;
// }

// int main(){
//     vector<int> nums{2,1,3,1,4,5,2};
//     int val;
//     cin>>val;

//     int ans = removeelement(nums,val);
//     cout<<ans;
// }



// QUESTION 73.  Find the Index of the First Occurrence in a String .....

// int findindex(string h , string n){
//     int a = h.size();
//     int b = n.size();

//     if(b == 0){
//         return 0;
//     }

//     for(int i=0; i <= a-b; i++){
//         int j =0;

//         while(j < b && h[i+j] == n[j]){
//             j++;
//         }

//         if(j == b){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     string h ;
//     string n ;
//     cin>>h;
//     cin>>n;

//     int index = findindex(h,n);
//     cout<<index;
// }



