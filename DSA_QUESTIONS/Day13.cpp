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

// QUESTION 46. 

int main(){
    int n;
    cin>>n;
    int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,57,59,61,67};
    int p = arr[n-1];
    int a =p;
    int sum =0;
    int s1 = 0;
    while(p>0 ){
        int d = p%10;
        sum += d;
        p /= 10;
    }
    if(sum != 0 || sum !=1 || sum !=2 || sum !=3 || sum !=4 || sum !=5 ||sum !=6 || sum !=7 || sum !=8 || sum !=9){
        int d1 = sum%10;
        s1 += d1;
        sum /= 10;
    }
    else{
    cout<<sum * a;
        return 0;
    }
    cout<<s1*a;


}