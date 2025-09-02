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

vector<vector<int>> pascals(int n){
    vector<vector<int>> ans(n);

    for(int i =0; i<n; i++){
        ans[i].resize(i+1);;
        ans[i][0] = ans[i][i] = 1;

        for(int j = 1; j<i; j++){
            ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>> ans = pascals(n);

    for (auto &triplet : ans) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
}