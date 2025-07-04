#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
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

// string str = "smile";
// string vowels = "aeiou";
// int count=0;
// for(int i=0; i<str.size(); i++){
//      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
//           count++;
//      }
// }

// cout<<count;



//----------------------------------------------QUESTION 6. COUNT THE WORDS IN A STRING.....

// string str = "python is good language and i learn from cybrom";
// int count =1;

// for(int i=0; i<str.size()+1; i++){
//     if (str[i] == ' '){
//         count++;
//     }
// }
// cout<<"no. of words are: "<<count<<endl;




//----------------------------------------------QUESTION 8. INSERT DASH BETWEEN TWO ODD NUMBERS IN A STRING....

// string num = "1345793";
// string result = "";

// for(int i=0; i<num.size(); i++) {
//     result += num[i];

//     if(i < num.size()-1) {
//         if(num[i] %2 != 0 && num[i+1] %2 != 0) {
//             result += "-";
//         }
//     }
// }
// cout << result;



//-------------------------------------------------QUESTION . PRINT THE WORD OF STRING WITH MAXIMUM LENGTH.........

//   string str = "cpp is good language to learn";

//     int maxLen = 0;
//     int maxStart = 0;

//     int i = 0;
//     while (i < str.size()) {
     
//         while (i < str.size() && str[i] == ' ') {
//             i++;
//         }

//         int start = i;
//         int len = 0;

      
//         while (i < str.size() && str[i] != ' ') {
//             i++;
//             len++;
//         }

    
//         if (len > maxLen) {
//             maxLen = len;
//             maxStart = start;
//         }
//     }

//     for (int j = maxStart; j < maxStart + maxLen; j++) {
//         cout << str[j];
//     }
//     cout << endl;

    

//-------------------------------------------------QUESTION 13. WAP TO FIND MISSING NUMBER FROM VECTOR.....
// EXAMPLE INPUT : {1,2,3,5,6}
// OUTPUT : {4}



// vector<int>v{1,3,4,6,7,9,12};

// for(int i=0; i<v.size()-1; i++){
//      int c = v[i];
//      int n = v[i+1];

//      if (n - c >1){
//           for(int k = c+1; k < n; k++){
//                cout<<k<<" ";
//           }
//      }
// }

// ------------------------------------------------QUESTION 14. WAP TO REMOVE DUPLICATES VALUES FROM VECTOR......

// vector<int>v;

// int size  , num;
// cin>>size;

// for(int i=0; i<size; i++){
//      cin>>num;
//      v.push_back(num);
// }

//-----------------------MY APPRAOCH

// for(int i=0 ; i<size; i++){
//      int j=0;
//      if(v[j] == v[i+1]){
//           v[i+1]=-1;
//           j++;
//           i--;
//      }
// }

// for(int i=0 ; i<size; i++){
//      if (v[i] != -1){
//           cout<<v[i]<<" ";
//      }
// }


// -------------------BRUTEFORCE APPROACH

// for(int i=0; i<size; i++){
//      for(int j=i+1; j<size; j++){
//           if(v[j] == v[i]){
//                v[j]=-1;
//           }
//      }
// }

// for(int i=0 ; i<size; i++){
//      if (v[i] != -1){
//           cout<<v[i]<<" ";
//      }
// }



//---------------------------------------------QUESTION 15.  MOVE ZEROS IN THE END OF THE VECTOR..........

// vector<int>v{1,0,2,0,0,3,4,1,0,8,9};

// int j=0;

// for(int i=0; i<v.size(); i++){
//      if (v[i] != 0){
//           swap(v[i] ,v[j]);
//           j++;
//      }
// }

// for(int i=0; i<v.size(); i++){
//      cout<<v[i]<<" ";
// }


//----------------------------------------------QUESTION 16. SWAP THE FIRST AND LAST CHARACTERS OF THE WORDS PRESENT IN THE STRING...........

// string str = "Quality on Time";

// int n = str.size();
// int st = 0;

// for (int i = 0; i <= n; i++){
//     if(str[i] == ' ' || i == n){
//         int end = i-1;
//         if(end > st){
//             swap(str[st] ,str[end]);
//         }
//         st = i+1;
//     }
// }

// cout<<str;





}