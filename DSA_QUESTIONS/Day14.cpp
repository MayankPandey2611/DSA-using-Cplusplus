
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


// QUESTION 49. TRAPPING RAIN WATER......


//  int trap(vector<int>& height) {
        
//         int n = height.size();
//         int ml = 0; 
//         int mr=0;
//         int w = 0;
//         int j =0;

//         for(int i=0; i<n; i++){
//             if(height[i]  > height[j]){
//                 j= i;
//             }
//         }

//         for(int i=0; i<j; i++){
//             if(ml > height[i]){
//                 w += ml - height[i];
//             }
//             else{
//                 ml = height[i];
//             }
//         }

//         for(int i=n-1; i>j; i--){
//             if(mr > height[i]){
//                 w += mr - height[i];
//             }
//             else{
//                 mr = height[i];
//             }
//         }
//         return w;
//     }
// int main(){
//     vector<int>arr{1,2,0,1,0,2,1,0,0,1,2};
//     cout<<trap(arr);
// }



// QUESTION 50. 3 SUM.....

vector<vector<int>> threesum(vector<int>& arr){
    sort(arr.begin(),arr.end());
   vector<vector<int>>result;
    int n = arr.size();

    for(int i=0; i<n; i++){
        if(i > 0 && arr[i] == arr[i-1]  ){
            continue;
        }

        int target = -arr[i];
        int start = i+1;
        int end = n-1;

        while(start < end){
            int sum = arr[start]+arr[end];
            if(sum == target){
                result.push_back({arr[i],arr[start],arr[end]});
                while(start < end && arr[start] == arr[start+1]){
                    ++start;
                }
                while(start < end && arr[end] == arr[end-1]){
                    --end;
                }
                ++start;
                --end;
            }
            else if(sum <target){
                ++start;
            }
            else{
                --end;
            }
        }
    }
    return result;
}


int main(){
    vector<int>arr{-1,0,1,2,-1,-4};

    vector<vector<int>>ans = threesum(arr);
   
    for (auto &triplet : ans) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

}