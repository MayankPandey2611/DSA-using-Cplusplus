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

// QUESTION 67. NUMBER OF ZEROES FILLED SUBARRAY......................

// long long findzero(vector<int>& arr){
//     long long result =0 , count =0;

//     for(int n : arr){
//         if(n == 0){
//             count++;
//             result += count;
//         }
//         else{
//             count =0;
//         }
//     }
//     return result;
// }

// int main(){
//     vector<int>arr{1,0,0,2,3,0,0,1,0,3};
//     long long result = findzero(arr);
//     cout<<result;
// }

// QUESTION 68.  Count Square Submatrices with All Ones.........

int countmatrix(vector<vector<int>> &m)
{
    int a = m.size(), b = m[0].size();

    vector<vector<int>> dp(a, vector<int>(b, 0));
    int total = 0;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (m[i][j] == 1)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 1;
                }
                else
                {
                    dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
                }
                total += dp[i][j];
            }
        }
    }
    return total;
}

int main()
{
    vector<vector<int>> matrix{{1, 0, 1},
                               {1, 1, 0},
                               {1, 1, 0}};

    int result = countmatrix(matrix);
    cout << result;
}