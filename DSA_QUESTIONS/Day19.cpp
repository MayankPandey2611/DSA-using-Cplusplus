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
void findsum(int n,int k,vector<vector<int>>& ans , vector<int> temp , int i, int sum){
    if(temp.size() == k){
        if(sum == n){
            ans.push_back(temp);
        }
        return;
    }

    for(int j= i+1; j<10; j++){
        temp.push_back(j);
        findsum(n,k,ans,temp,j,sum+j);
        temp.pop_back();
    }
}

vector<vector<int>> combination(int n , int k){
    vector<vector<int>> ans;
    vector<int>temp;
    findsum(n,k,ans,temp,0,0);
    return ans;
}

int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    vector<vector<int>> ans = combination(n,k);

    for (auto &triplet : ans) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
}