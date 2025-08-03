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
string decode(string s){
    stack<int>num;
    stack<string>result;
    int n=0;
    string str = "";
    
    for(auto ch : s){
        if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9'){
            n = n * 10 + (ch-'0');
        }

        else if(ch == '['){
            num.push(n);
            result.push(str);
            n=0;
            str="";
        }

        else if(ch == ']'){
            int size = num.top();
            num.pop();
            string temp = result.top();
            result.pop();

            for(int i=0; i<size; i++){
                temp += str;
            }
            str = temp;
        }
        else{
            str += ch;
        }

    }
    return str;
}
int main(){
    string s;
    cin>>s;
    string ans = decode(s);
    cout<<ans;
}