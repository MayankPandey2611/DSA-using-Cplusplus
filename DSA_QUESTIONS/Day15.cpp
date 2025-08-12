#include <iostream>
#include <cctype>
#include <climits>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<math.h>
#include<stack>
#include<bitset>
#include<stack>
using namespace std;

// QUESTION 53. FIND PIVOT INDEX......


// int pivotindex(vector<int>& nums){
//     int sum = 0;
//     for(int num : nums){
//         sum += num;
//     }

//     int lsum  = 0;
//     for(int i=0; i<nums.size(); i++){
//         int rsum = sum - lsum - nums[i];
//         if(rsum == lsum){
//             return i;
//         }
//         lsum += nums[i];
//     }
//     return -1;
// }

// int main(){
//     vector<int>nums{1,5,4,3,3};
//     cout<<pivotindex(nums);
// }



// QUESTION 54. SUCCESSFUL PAIRS OF SPELLS  AND POTIONS................

vector<int> findpairs(vector<int>& sp,vector<int>& po , long long success){
    int n = sp.size();
    int m = po.size();
    sort(po.begin(),po.end());

    vector<int> pair(n);

    for(int i=0; i<n; i++){
        int s = sp[i];
        int l = 0; 
        int r = m-1;
        while(l <= r){
            int mid = (l+r)/2;
            long long  p = (long long) s * po[mid];
            if(p >= success){
                r = mid -1;
            }
            else{
                l = mid + 1;
            }
        }
        pair[i] = m-l;
    }
    return pair;
}

int main(){
    vector<int> spells{3,1,2};
    vector<int> potions{8,5,8};
    long long success = 16;
    vector<int> pairs = findpairs(spells,potions,success);
    for(int i : pairs){
        cout<<i<<" ";
    }
}