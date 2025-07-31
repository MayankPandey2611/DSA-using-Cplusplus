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
using namespace std;

// QUESTION 40. REVERSE BITS..........................

// unsigned int reversebit(int num){
//     unsigned int result=0;
//     for(int i=0; i<8; i++){
//         result <<=1;
//         result |= (num & 1);
//         num >>=1;
//     }
//     return result;
// }

// int main(){
//     int num;
//     cin>>num;
//     int reverse = reversebit(num);
//     cout<<reverse;
// }


// QUESTION 41. NUMBER OF 1 BITS................

// int bitscount(int n){
    
//     int count =0;
//     while (n >0){
//         if(n & 1){
//             count++;
//         }
//         n >>= 1;
//     }
    
//     return count;
// }

// int main(){
//     int num ;
//     cin>>num;

   
//     int ans = bitscount(num);
//     cout<<ans;
// }

// QUESTION 42. COUNTING BITS......................

vector<int> countbit(int n){
   
    vector<int>result(n+1,0);
    for(int i=1; i<=n; i++){
        result[i] = result[i >> 1] + (i & 1);
    }
    return result;
}


int main(){
    int num;
    cin>>num;

    vector<int>res = countbit(num);
    for(auto n : res){
        cout<<n<<" ";
    }
}