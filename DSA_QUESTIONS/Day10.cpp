#include <iostream>
#include <cctype>
#include <climits>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<math.h>
#include<stack>
using namespace std;

// QUESTION 34. VALID ANAGRAM.................................

// bool isAnagram(string str , string str2){

//     if(str.size() != str2.size()){
//         return false;
//     }
//     string s,s1;

//     for(char ch:str){
//         if(isalpha(ch)){
//             s += tolower(ch);
//         }
//     }

//     for(char ch: str2){
//         if(isalpha(ch)){
//             s1 += tolower(ch);
//         }
//     }

//     int occurs[26] ={0};

//     for(int i=0; i<str.size(); i++){
//         occurs[s[i] - 'a']++;
//         occurs[s1[i] - 'a']--;
//     }

//     for(auto i : occurs){
//         if(i != 0){
//             return false;
//         }
//     }

// return true;

// }
// int main(){
//     string str ;
//     string str2;

//     getline(cin,str);
//     getline(cin,str2);

//     if(isAnagram(str,str2)){
//         cout<<"Anagram";
//     }
//     else{
//         cout<<"not a anagram";
//     }
// }



// QUESTION 35. GROUP ANAGRAMS...............

// vector<vector<string>> groupanagram(vector<string>str){
//     unordered_map<string , vector<string>> mp;

//     for(string s: str){
//         string key = s;
//         sort(key.begin() , key.end());
//         mp[key].push_back(s);
//     }

//     vector<vector<string>> result;

//     for(auto &it : mp){
//         result.push_back(it.second);
//     }
//     return result;
// }


// int main(){
//     vector<string>str {"bat","ate","eat","nat","tan"};

//     vector<vector<string>> ans = groupanagram(str);

//     for(auto i : ans){
//         for(auto j : i){
//             cout<<"[{"<<j<<"}]" ;
//         }
//         cout<<endl;
//     }

// }



// QUESTION 36. TOP K FREQUENT ELEMENTS........


// vector<int> Topfrequent(vector<int>& arr , int k){
//     unordered_map<int , int> mp;

//     for(auto k:arr){
//         mp[k]++;
//     }

//     vector<vector<int>> store(arr.size() +1);
//     for(auto &p : mp){
//         store[p.second].push_back(p.first);
//     }

//     vector<int>result;

//     for(int i = store.size()-1; i>=0 && result.size() < k; i--){
//         for(int n : store[i]){
//             result.push_back(n);
//             if(result.size() == k ) break;
            
//         }
//     }
// return result;
// }

// int main(){
//     vector<int>arr{1,1,1,2,2,3};
//     int k ;
//     cin>>k;

//     vector<int>result = Topfrequent(arr,k);
//     for(auto k:result){
//         cout<<k<<" ";
//     }

// }




// QUESTION 37. LONGEST CONSECUTIVE SEQUENCE.................

int longestseq(vector<int>& arr){
    sort(arr.begin(), arr.end());
    int count =1;
    int maxcount =1;
    for(int i=1; i<arr.size(); i++){
       if(arr[i] == arr[i-1]){
        continue;
       }
       else if(arr[i] == arr[i-1] +1){
        count++;
       }
       else{
        count =1;
       }
       maxcount=max(count,maxcount);
    }
    return maxcount;
}

int main(){
    vector<int>arr {1,0,1,2};

    int result = longestseq(arr);
    cout<<result;
}