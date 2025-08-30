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

// QUESTION 80. Maximum Area of Longest Diagonal Rectangle.....

// int maxarea(vector<vector<int>>& d){
//     int ans = 0 , maxi =0;
//     for(auto& di : d){
//         int l = di[0] , w = di[1];
//         int t = l * l + w* w;
//         if(t > maxi){
//             maxi = t;
//             ans = l * w;
//         }
//         else if(t == maxi){
//             ans = max(ans , l*w);
//         }
//     }
//     return ans;
// }
// int main(){
// vector<vector<int>> dia{{3,4},{4,3}};
// int area = maxarea(dia);
// cout<<area;
// }



// QUESTION  81. ALICE AND BOB PLAYING FLOWER GAME.....................


// long long findways(int n , int m){
//     long long xodd = (n+1) /2;
//     long long xeven = n/2;
//     long  long yodd = (m+1) /2;
//     long long yeven = m/2;

//     return xodd * yeven + xeven * yodd;
// }

// int main(){
//     int n , m;
//     cin>>n;
//     cin>>m;

//     int pairs = findways(n,m);
//     cout<<pairs;
// }



// QUESTION 82. STRICKLY PALINDROMIC NUMBER....................


// bool ispalindromic(string s){
//     string r = s;
//     reverse(s.begin(),s.end());
//     return r == s;
// }

// string convertbase(int n , int base){
//     string m;
//     while(n > 0){
//         m += to_string(n % base);
//         n /= base;
//     }
//     reverse(m.begin(), m.end());
//     return m;
// }

// bool check(int n){
//     string s;
//     for(int i=2; i<= n-2; i++){
//         s = convertbase(n,i);
//         if(!ispalindromic(s)){
//             return false;
//         }
//     }
//     return true;
// }


// int main(){
//     int n;
//     cin>>n;

//     bool ans = check(n);
//     if(!ans){
//         cout<<"false";
//     }
//     else{
//         cout<<"true";
//     }
// }




