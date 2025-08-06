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

// QUESTION 45. ENCODE THE GIVEN STRING.....
// string decode(string s){
//     stack<int>num;
//     stack<string>result;
//     int n=0;
//     string str = "";
    
//     for(auto ch : s){
//         if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9'){
//             n = n * 10 + (ch-'0');
//         }

//         else if(ch == '['){
//             num.push(n);
//             result.push(str);
//             n=0;
//             str="";
//         }

//         else if(ch == ']'){
//             int size = num.top();
//             num.pop();
//             string temp = result.top();
//             result.pop();

//             for(int i=0; i<size; i++){
//                 temp += str;
//             }
//             str = temp;
//         }
//         else{
//             str += ch;
//         }

//     }
//     return str;
// }
// int main(){
//     string s;
//     cin>>s;
//     string ans = decode(s);
//     cout<<ans;
// }

// QUESTION 46.  MULTIPLY THE SUM OF DIGITS OF PRIME NUMBER WITH THE PRIME NUMBER AND SUM SHOULD BE IN SINGLE DIGIT...................

// int main(){
//     int n;
//     cin>>n;
//     int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79};
//     int p = arr[n-1];
//     int a =p;
//     int sum =0;

//     while(p>0){
//         int d = p%10;
//         sum += d;
//         p /= 10;
//     }
//     while(sum > 9){
//         int s1 = 0;
//         while(sum > 0){
//             int d = sum % 10;
//             s1 += d;
//             sum /= 10;
//         }
//         sum = s1;
//     }
//     cout<<sum * a;
   
// }


// QUESTION 47. ADD DIGITS..

// int main(){
//     int num;
//     cin>>num;

//     int sum =0;

//     while(num>0){
//         int d = num % 10;
//         sum += d;
//         num /= 10;

//     }

//     while(sum > 9){
//         int s1 =0;
//         while(sum>0){
//             int d = sum % 10;
//             s1 += d;
//             sum /=10;
//         }
//         sum = s1;
//     }

//     cout<<sum;
// }


// QUESTION 48. SUM OF DIGITS FROM GIVEN RANGE......

// int main(){
//     int n,m ;
//     cin>>n>>m;
//     int sum =0;

//     for(int i =n; i<= m; i++){
//         sum += i;
//     }
//     cout<<sum;
// }


