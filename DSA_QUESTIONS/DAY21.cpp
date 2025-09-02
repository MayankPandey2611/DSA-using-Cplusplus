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




// QUESTION 83. ROMAN TO INTEGER ....


// int rotoin(string s){
//     unordered_map<char,int> val = {
//         {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
//     };

//     int n = s.size();
//     int total =0;

//     for(int i=0; i<n; i++){
//         if(i + 1 < n && val[s[i]] < val[s[i+1]]){
//             total -= val[s[i]];
//         }
//         else{
//             total += val[s[i]];
//         }
//     }
//     return total;
// }

// int main(){
//     string s;
//     cin>>s;

//     int ans = rotoin(s);
//     cout<<ans;
// }


// QUESTION 84. LONGEST COMMON PREFIX...............


// string prefix(vector<string>& str){

//     if(str.empty()){
//         return "";
//     }

//     string res = str[0];

//     for(int i = 1 ; i <str.size(); i++){
//         while(str[i].find(res) != 0){
//             res = res.substr(0,res.size()-1);
//             if(res.empty()){
//                 return "";
//             }
//         }
//     }
//     return res;


// }

// int main(){
//     vector<string> str {"","","",""};

//     string ans = prefix(str);
//     cout<<ans;
// }



// QUESTION 85. BEST TIME TO BUY AND SELL THE STOCK.........................

// int bestprofit(vector<int>& p){
//     int minp = INT_MAX;
//     int maxp = 0;

//     for(int i : p){
//         minp = min(minp , i);
//         maxp = max(maxp , i - minp);
//     }
//     return maxp;
// }


// int main(){
//     vector<int> price{7,1,4,2,8};
//     int profit = bestprofit(price);
//     cout<<"profit = "<<profit;
// }