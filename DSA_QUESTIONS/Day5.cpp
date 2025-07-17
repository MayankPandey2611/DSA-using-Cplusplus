#include <iostream>
#include <cctype>

#include<string>
#include<vector>

using namespace std;

// QUESTION 13. CHECK IF TWO STRINGS ARE ANAGRAM OR NOT........

// int main(){

// string str ;
// getline(cin,str);

// string str1;
// getline(cin,str1);


//    string s1, s2;
//     for (char ch : str) {
//         if (isalpha(ch)) {
//             s1 += tolower(ch);
//         }
//     }
//     for (char ch : str1) {
//         if (isalpha(ch)) {
//             s2 += tolower(ch);
//         }
//     }


// if(s1.size() != s2.size()){
//     cout<<"Not a Anagram.."<<endl;
//     return 0;
// }



// int alpha[26]={0};

// for(int i=0; i<str.size(); i++){
//     alpha[s1[i] - 'a' ]++;
//     alpha[s2[i] - 'a' ]--;

// }
// bool check = true;

// for(int i=0; i<26; i++){
//     if(alpha[i] != 0){
//         check = false;
//         break;
//     }
// }

// if(check){
//     cout<<"Anagram "<<endl;
// }
// else{
//     cout<<"Not a Anagram"<<endl;
// }


// }


// QUESTION 14. REMOVE DUPLICATES ELEMENTS FROM AN ARRAY................ 

// int main(){

//     vector<int>arr{2,2,3,2,5,5,4,6,1,7,7};

//   for(int i=0; i<arr.size(); i++){
//     for(int j=i+1; j<arr.size(); j++){
//         if(arr[i] == arr[j]){
//             arr[j]=-1;
//         }
//     }
//   }

//     for(int i=0; i<arr.size(); i++){
//         if(arr[i] != -1){
//             cout<<arr[i]<<" ";
//         }
//     }

// }

//-------BETTER APPROACH.........

// #include<unordered_set>
// int main(){
//      vector<int>arr{2,2,3,2,5,5,4,6,1,7,7,-1,-1,5,7,5,7,0,-9};

//      unordered_set<int> dupli;
//      vector<int>result;

//      for(auto num : arr){
//         if(dupli.find(num) == dupli.end()){
//             result.push_back(num);
//             dupli.insert(num);
//         }
//      }

//      for(auto i : result){
//         cout<<i<<" ";
//      }

// }


// QUESTIOM 15. CHECKK IF NUMBER IS ARMSTRONG OR NOT............

// #include<cmath>
// int main(){

//     int num;
//     cin>>num;

//     int ans = num;
//     int count=0;

//     while(ans>0){
//         ans /= 10;
//         count++;
//     }

//     ans=num;
//     int sum =0;

//     while(ans > 0){
//         int d = ans % 10;
//         sum += round(pow(d,count));
//         ans /= 10;    
//     }

//     if(sum == num){
//         cout<<"armstrong"<<endl;
//     }
//     else{
//         cout<<"not a armstrong"<<endl;
//     }

// }




