#include <iostream>
#include <cctype>
#include<bits/stdc++.h>
#include<string>

using namespace std;

// QUESTION 13. CHECK IF TWO STRINGS ARE ANAGRAM OR NOT........

int main(){

string str ;
getline(cin,str);

string str1;
getline(cin,str1);


   string s1, s2;
    for (char ch : str) {
        if (isalpha(ch)) {
            s1 += tolower(ch);
        }
    }
    for (char ch : str1) {
        if (isalpha(ch)) {
            s2 += tolower(ch);
        }
    }


if(s1.size() != s2.size()){
    cout<<"Not a Anagram.."<<endl;
    return 0;
}



int alpha[26]={0};

for(int i=0; i<str.size(); i++){
    alpha[s1[i] - 'a' ]++;
    alpha[s2[i] - 'a' ]--;

}
bool check = true;

for(int i=0; i<26; i++){
    if(alpha[i] != 0){
        check = false;
        break;
    }
}


if(check){
    cout<<"Anagram "<<endl;
}
else{
    cout<<"Not a Anagram"<<endl;
}


}