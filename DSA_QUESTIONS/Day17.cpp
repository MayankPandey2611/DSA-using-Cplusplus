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

// QUESTION 61. FIND MAXIMUM NUMBER OF 69 DIGITS...............

// int main(){
//     int num;
//     cin>>num;

//     int n = num;
//     int i = -1;
//     int j = 0;

//     while(n > 0){
//         if(n % 10 == 6){
//             i =j;
//         }
//         n /= 10;
//         j++;
//     }

//     if(i == -1) cout<<num;
//     else{
//         cout<<num + 3 * pow(10,i);
//     }
// }

// QUESTION 62. FIND GCD OF STRING...............

// int Gcd(int a,int b){
//     return b == 0 ? a : Gcd( b , a % b);
// }

// int main(){
//     string str1 ,str2;
//     getline(cin,str1);
//     getline(cin,str2);

//     if ( (str1+str2) != (str2+str1)){
//         cout<<"";
//     }

//     int gcd = Gcd(str1.length(),str2.length());
   
//     cout<<str1.substr(0,gcd);

// }


// QUESTION 63. KIDS WITH GREATEST NUMBERS OF CANDIES......

// vector<bool>maxcandy(vector<int>& c , int ec){
//     vector<bool>res ;
//     int maxc = 0;

//     for(int candy : c){
//         maxc = max(candy,maxc);
//     }

//     for(int i=0; i<c.size(); i++){
//         if(c[i]+ec >= maxc){
//             res.push_back(true);
//         }
//         else{
//             res.push_back(false);
//         }
//     }
//     return res;
// }

// int main(){
//     vector<int>candies{2,3,5,1,3};
//     int extracandy = 3;

//     vector<bool>result = maxcandy(candies,extracandy);
//     for(bool k : result){
//         cout<<k<<" ";
//     }
// }


// QUESTION 64. CAN PLACE FLOWERS......

bool placeflower(vector<int>& f , int n){
    int c = 0;
    int s = f.size();

    for(int i=0; i<s && c <n; i++){
        if(f[i] == 0){
            bool l = (i == 0) || (f[i-1] == 0);
            bool r = (i == s-1) || (f[i+1] == 0);

            if(l && r){
                f[i] =1;
                c++;
                i++;
            }
        }
    }
    return c>=n;
}
int main(){
    vector<int>flower{1,0,0,0,0,0,1};
    int n =2;
    bool ans = placeflower(flower,n);
    cout<<ans;
}
