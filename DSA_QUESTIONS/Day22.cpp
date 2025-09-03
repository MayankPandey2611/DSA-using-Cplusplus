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


// QUESTION 85. Find the Number of Ways to Place People I


// int noofways(vector<vector<int>> val){
//     int n = val.size();
//     int ans =  0;


//     for(int i=0; i<n; i++){
//         for(int j =0; j<n; j++){
//             if (i == j){
//                 continue;
//             }
//             int xi = val[i][0] , yi = val[i][1];
//             int xj = val[j][0] , yj = val[j][1];

//             if(xi <= xj && yi >= yj){
//                 bool valid = true;

//                 for(int k =0; k<n; k++){
//                     if( k == i || k == j){
//                         continue;
//                     }
//                     int xk = val[k][0] , yk = val[k][0];
//                     if(xi <= xk && xk <= xj && yj <= yk && yk  <= yi){
//                         valid = false;
//                         break;
//                     }
//                 }
//                 if(valid){
//                     ans++;
//                 }
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<vector<int>> val{{6,2},{4,4},{2,6}};

//     int count = noofways(val);
//     cout<<count;

// }



// QUESTION 86. PASCALS TRIANGLE ..................

// vector<vector<int>> pascals(int n){
//     vector<vector<int>> ans(n);

//     for(int i =0; i<n; i++){
//         ans[i].resize(i+1);;
//         ans[i][0] = ans[i][i] = 1;

//         for(int j = 1; j<i; j++){
//             ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
//         }
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;

//     vector<vector<int>> ans = pascals(n);

//     for (auto &triplet : ans) {
//         for (int num : triplet) {
//             cout << num << " ";
//         }
//         cout << endl;
//     }
// }



// QUESTION 87. PASCALS TRIANGLE 2........


// vector<int>getrow(int n){
//     vector<int> ans(n+1 ,0);

//     ans[0] = 1;

//     for(int i=1; i<=n; i++){
//         for(int j =i; j>0; j--){
//             ans[j] = ans[j] + ans[j-1];
//         }
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;

//     vector<int>ans = getrow(n);
//     for(int i : ans){
//         cout<<i<<" ";
//     }
// }



// QUESTION 88. EXCEL SHEET COLUMN TITLE PROBLEM....................

// string findcolumn(int n){
//     string res = "" ;

//     while(n > 0){
//         n--;

//         int r = n % 26 ;
//         res.push_back('A' + r);
//         n /= 26;
//     }
//     reverse(res.begin() , res.end());
//     return res;
// }

// int main(){
//     int n;
//     cin>>n;

//     string ans = findcolumn(n);
//     cout<<ans;
// }


// QUESTION 89. FIND THE MAJORITY ELEMENT.....................


// int findmajority(vector<int>& num){
//     unordered_map<int,int> val;

//     for(auto k : num){
//         val[k]++;
//     }

//     int max = num[0];
//     int count = 0;

//     for(auto i : val){
//         if(i.second > count){
//             count = i.second;
//             max = i.first;
//         }
//     }
//     return max;
// }

// int main(){
//     vector<int> num{2,1,3,1,2,1,3,2,1};

//     int ans = findmajority(num);
//     cout<<ans;

// }




// QUESTION 90. EXCEL SHEET COLUMN NUMBER PROBLEM.....................


int findnumber(string s){
    int ans =0;

    for(char ch : s){
        int val = ch - 'A' + 1;
        ans = ans * 26 + val;
    }
    return ans;
}

int main(){
    string s;
    cin>>s;

    int val = findnumber(s);
    cout<<val;
}