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

int maxarea(vector<vector<int>>& d){
    int ans = 0 , maxi =0;
    for(auto& di : d){
        int l = di[0] , w = di[1];
        int t = l * l + w* w;
        if(t > maxi){
            maxi = t;
            ans = l * w;
        }
        else if(t == maxi){
            ans = max(ans , l*w);
        }
    }
    return ans;
}
int main(){
vector<vector<int>> dia{{3,4},{4,3}};
int area = maxarea(dia);
cout<<area;
}