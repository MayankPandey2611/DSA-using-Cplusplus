#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main (){

     //-----------------------------------------------QUESTION 11. CHECK ANAGRAM 

//     char s1[10] = "listen";
//     char s2[10] = "slients";

//     int ans[26] = {0};

//    for(int i=0; s1[i] != '\0'; i++){
//         ans[ s1[i] - 'a']++;
//    }

//    for(int i=0; s2[i] != '\0'; i++){
//         ans[ s2[i] - 'a']--;
//    }

//    bool check = true;

//    for (int i=0; i<26; i++){
//      if( ans [i] !=0){
//         check=false;
//         break;
//      }
//    }

//    if(check){
//     cout<<"Anagram";
//    }

//    else{
//     cout<<"Not a Anagram";
//    }
   


//-----------------------------------------------------QUESTION 1. REVERSE A STRING..

// string str = "Cybrom";
// reverse(str.begin() , str.end());
// cout<<str;

//-----------------------------------------------------QUESTION 7. CHECK PALINDROME....

// string str = "vygg";

// string ans = str;

// reverse(str.begin() , str.end());

// if(ans == str){
//      cout<<"Palindrome"<<endl;
// }

// else{
//      cout<<"Not a Palindrome";
// }



// ---------------------------------------------------QUESTION 5. COUNT VOWEL IN A STRING......

string str = "smile";
string vowels = "aeiou";
int count=0;
for(int i=0; i<str.size(); i++){
     if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
          count++;
     }
}

cout<<count;


//-------------------------------------------------QUESTION 13. WAP TO FIND MISSING NUMBER FROM VECTOR.....
// EXAMPLE INPUT : {1,2,3,5,6}
// OUTPUT : {4}


// ------------------------------------------------QUESTION 14. WAP TO REMOVE DUPLICATES VALUES FROM VECTOR......
}