#include<iostream>
using namespace  std;

int main(){

    // string s="Mayank";
    
    // cout<<s<<endl;
    // cout<<s[0]<<endl;

    // cout<<s[6]<<endl;    //IT PRINTS NULL VALUE.

    // cout<<s[8]<<endl;  // IT PRINTS GARBAGE CHARACTER.

    // cout<<s.length();
   
    
    // for(int i=0;i<6; i++){
    //     // cout<<s[i]<<" ";
    //     cout<<s.at(i);
    // }


    //1. REVERSE A STRING .

    // string s="Mayank";
// int i=0; 
// int j=s.length()-1;

//     while(i<j){
//         char temp= s[i];
//         s[i]=s[j];
//         s[j]=temp;
//         i++;
//         j--;
//     }

//     for(int i=0;i<s.length(); i++){
//         cout<<s.at(i);
//     }


    // 2.   CHECK PALINDROME FOR A STRING.

string  s = "mayank";

int i=0; 
int j=s.length()-1;



    while(i<j){
        if(s[i]!=s[j]){
            cout<<"Not palindrome";
            return 0;
        }
    i++;
    j--;
    }
    cout<<"palindrome";
  
}