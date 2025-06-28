#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main (){
    char s1[10] = "listen";
    char s2[10] = "slients";

    int ans[26] = {0};

   for(int i=0; s1[i] != '\0'; i++){
        ans[ s1[i] - 'a']++;
   }

   for(int i=0; s2[i] != '\0'; i++){
        ans[ s2[i] - 'a']--;
   }

   bool check = true;

   for (int i=0; i<26; i++){
     if( ans [i] !=0){
        check=false;
        break;
     }
   }

   if(check){
    cout<<"Anagram";
   }

   else{
    cout<<"Not a Anagram";
   }
   
}